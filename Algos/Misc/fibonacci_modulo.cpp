#include<iostream>

using namespace std;

long fib_mod(int n,int m){
    long long len = n % (m*m -1);
    long long arr[len];
    arr[0] - 0;
    arr[1] = 1;
    for(int i = 2; i < len; ++i)
        arr[i] = arr[i-1] + arr[i-2];
    long result = arr[n-1] % m;
    return result;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << fib_mod(n+1,m);
    return 0;
}