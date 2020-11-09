// Problem Link - https://codeforces.com/problemset/problem/1285/B
// Date - 6/11/2020

#include<bits/stdc++.h>

#define loop(i,a,b) for(i=a; i<b; ++i)
typedef long long ll;

using namespace std;

ll mss(ll arr[], ll n)
{
    ll i, ans = 0, sum = 0, len=0;
    loop(i, 0, n)
    {
        if(sum + arr[i] > 0)
        {
            sum += arr[i];
            len++;
        }
        else
        {
            sum = 0;
            len = 0;
        }
        ans = max(sum,ans);
        if(len == n-1)
            break;
    }
    return ans;
}

int main()
{
    ll t,n,i;
    cin >> t;
    while(t>0)
    {
        cin >> n;
        ll y_sum=0, arr[n];
        loop(i,0,n)
        {
            cin >> arr[i];
            y_sum += arr[i];
        }
        if(y_sum > mss(arr,n))
            cout << "YES";
        else 
            cout << "NO";
        t--;
        if(t!=0)
            cout << endl;
    }
    return 0;
}