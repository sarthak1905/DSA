// Problem link- https://codeforces.com/problemset/problem/230/B
// Date- 2/11/2020

#include<bits/stdc++.h>

using namespace std;

bool isPrime(long long n) 
{ 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (long long i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
    return true; 
} 

bool isSquare(long long x)
{
    long long y = sqrt(x);
    if(y*y == x)
        return true;
    return false;
}

bool isTPrime(long long x)
{
    if(x == 1)
        return false;
    if(isSquare(x))
        if(isPrime(sqrt(x)))
            return true;
    return false;
}

int main()
{
    long n,i;
    cin >> n;
    long long arr[n];
    for(i=0; i<n; ++i) cin >> arr[i];
    for(i=0; i<n; ++i)
    {
        if(isTPrime(arr[i]))
            cout << "YES";
        else
            cout << "NO";
        if(i < n-1)
            cout << endl;
    }
    return 0;
}