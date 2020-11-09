// Problem link- https://codeforces.com/problemset/problem/189/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, c, temp, count=0;
    cin >> n >> a >> b >> c;
    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end());

    cout << count;
    return 0;
}