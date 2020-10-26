#include<iostream>

using namespace std;

long long lcm(int a, int b){
    long long result, i = 1;
    while(1){
        result = a*i;
        if (result % b == 0)
            break;
        i++;
    }
    return result;
}

int main(){
    int a,b;
    cin >> a >> b;
    if (a>b)
        cout << lcm(a,b);
    else
        cout << lcm(b,a);
    return 0;
}