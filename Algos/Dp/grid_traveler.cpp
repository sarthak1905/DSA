#include<bits/stdc++.h>
using namespace std;

long long gridTraveler(long long m, long long n)
{
    vector<vector<long long>> arr(m, vector<long long> (n, 0));
    for (long long i = 0; i < m; ++i) arr[i][0] = 1;
    for (long long j = 0; j < n; ++j) arr[0][j] = 1;

    for(long long i = 1; i < m; ++i)
        for(long long j = 1; j < n; ++j)
            arr[i][j] = arr[i-1][j] + arr[i][j-1];

    return arr[m-1][n-1];
}

int main()
{
    long long m, n;
    cin >> m >> n;
    cout << gridTraveler(m, n);
    return 0;
}