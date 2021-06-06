#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    vector<ll> arr;
    ll n, num, sum, best;
    cin >> n;
    ll size = n;
    while(n--)
    {   
        cin >> num;
        arr.push_back(num);
    }
    sum = arr[0];
    best = sum;
    for(int i = 1; i < size; ++i)
    {
        sum = max(sum + arr[i], arr[i]);
        best = max(sum, best);
    }
    cout << best;
    return 0;   
}