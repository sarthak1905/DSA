// Problem link - https://codeforces.com/problemset/problem/459/B
// Date - 3/11/2020

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, i;
    cin >> n;
    vector<long long> x;
    for(i = 0; i < n; ++i)
    {
        long long temp;
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(),x.end());
    long long low = upper_bound(x.begin(), x.end(), x[0]) - x.begin();
    long long high = lower_bound(x.begin(), x.end(), x[n-1]) - x.begin();
    high = n - high;
    if(low < n)
        cout << x[n-1] - x[0] << " " << low * high;
    else
        cout << x[n-1] - x[0] << " " << (n*(n-1))/2;
    return 0;
}