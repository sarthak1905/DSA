// Problem Link - https://codeforces.com/problemset/problem/962/A
// Date - 10/11/2020

#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for(i=a; i<b; ++i)
typedef long long ll;

int main()
{
    ll n, i;
    cin >> n;
    ll arr[n], sum =0;
    loop(i,0,n)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    ll half;
    if(sum % 2 == 0)
        half = sum/2;
    else 
        half = sum/2 + 1;
    sum = 0;
    loop(i, 0, n)
    {
        sum += arr[i];
        if(sum >= half)
        {
            cout << ++i;
            break;
        }
    }
    return 0;
}