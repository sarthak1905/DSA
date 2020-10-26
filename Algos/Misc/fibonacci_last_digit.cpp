#include<iostream>

using namespace std;

int compute_last_digit(int n){
    int arr[n];
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i < n; ++i)
        arr[i] = (arr[i-1] + arr[i-2]) % 10;
    return arr[n-1];
}

int main(){
    int n;
    cin >> n;
    cout << compute_last_digit(n+1);
    return 0;
}