// Problem Link - https://codeforces.com/problemset/problem/1372/B
// Date - 5/11/2020

#include<bits/stdc++.h>

#define loop(i,a,b) for(i=a; i<=b; ++i)
#define ll long long

using namespace std;

void find_ab(ll n)
{
    ll i,temp;
    loop(i,3,sqrt(n))
    {
        if(n % i == 0)
        {
            temp = n/i;
            cout << temp << " " << n - temp;
            return;
        }
    }
    cout << "1 " << n-1;
    return;
}

int main()
{
    int t,i;
    ll n;
    cin >> t;
    loop(i,1,t)
    {
        cin >> n;
        if(n % 2 == 0)
            cout << n/2 << " " << n/2;
        else
            find_ab(n);
        if(i == t)
            break;
        cout << endl;
    }
    return 0;
}