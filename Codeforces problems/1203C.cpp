// Problem Link - https://codeforces.com/problemset/problem/1203/C
// Date - 9/11/2020

#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for(i=a; i<b; ++i)
typedef long long ll;

ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
ll findGCD(ll arr[], ll n) 
{ 
    ll result = arr[0];
    ll i; 
    loop(i, 1, n) 
    { 
        result = gcd(arr[i], result); 
        if(result == 1) 
           return 1; 
    } 
    return result; 
} 

int main()
{
    ll n, i, min;
    cin >> n;
    ll arr[n];
    loop(i,0,n) cin >> arr[i];
    ll c_factor = findGCD(arr, n);
    if(c_factor == 1)
    {
        cout << "1";
        return 0;
    }
    else if(c_factor == 2)
    {
        cout << "2";
        return 0;
    }
    vector<ll> factors;
    for(i = 2; i<=sqrt(c_factor); ++i)
    {
        if(c_factor % i == 0)
        {
            if(c_factor/i != i)
            {
                factors.push_back(i);
                factors.push_back(c_factor/i);
            }
            else 
                factors.push_back(i);
        }
    }
    factors.push_back(c_factor);
    cout << factors.size() + 1;
    return 0;
}