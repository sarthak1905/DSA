// Problem link- https://codeforces.com/problemset/problem/1/A
// Date - 2/11/2020

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, a, horizontal = 0, vertical = 0;
    cin >> n >> m >> a;
    if(a == 1)
        cout << n*m;
    else
    {
        while(n > 0 || m > 0)
        {
            if(n > 0)
            {   
                n -= a;
                horizontal++;
            }
            if( m > 0)
            {
                m-= a;
                vertical++;
            }
        }
        cout << horizontal * vertical;
    }
    return 0;
}