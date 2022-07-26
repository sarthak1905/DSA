#include<bits/stdc++.h>

using namespace std;

long long fib(long long n)
{
    vector<long long> arr(n, 0);
    arr[0] = arr[1] = 1;
    for(long long i = 2; i < n; ++i) arr[i] = arr[i-1] + arr[i-2];
    return arr[n - 1];
}

int main()
{
    long long n;
    cin >> n;
    cout << fib(n);
    return 0;
}