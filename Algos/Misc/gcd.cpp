#include<iostream>
using namespace std;

long gcd(int a, int b){
    if (b==0)
        return a;
    int a1 = a % b;
    return gcd(b,a1);
}

int main(){
    int a,b;
    cin >> a >> b;
    if(a>b)
        cout << gcd(a,b);
    else
        cout << gcd(b,a);
    return 0;
}