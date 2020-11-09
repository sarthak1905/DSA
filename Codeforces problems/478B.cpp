// Problem link - https://codeforces.com/problemset/problem/478/B
// Date - 4/11/2020

#include<bits/stdc++.h>

using namespace std;

long long nc2(long long x)
{
    return (x * (x-1))/2;
}

void find_min(long long n, long long m)
{
    long long temp, output, rem;
    if(n % m == 0)
    {
        temp = n/m;
        cout << nc2(temp)* m << " ";
        return;
    }
    else
    {
        temp = n/m;
        rem = n % m;
        output += ((m - rem) * nc2(temp)) + (rem * nc2(temp+1)); 
        cout << output << " ";
    }
    return;
}

void find_max(long long n, long long m)
{
    long long output = ((n-m+1) * (n-m))/2 ;
    cout << output;
    return;
}

int main()
{
    long long n, m;
    cin >> n >> m;
    find_min(n, m);
    find_max(n, m);
    return 0;
}