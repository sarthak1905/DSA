// Problem Link - https://codeforces.com/problemset/problem/1342/A
// Date - 11/11/2020

#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for(i=a; i<b; ++i)
typedef long long ll;

int main()
{
    ll t, x, y, a, b, money, l, h;
    cin >> t;
    while(t > 0)
    {
        cin >> x >> y >> a >> b;
        money = 0;
        if(x < y)
        {
            l = x;
            h = y;
        }
        else
        {
            l = y;
            h = x;
        }
        ll arr[3];
        arr[0] = l*a + h*a;
        arr[1] = b*l + a*(h-l);
        arr[2] = b*h + a*(h-l);
        sort(arr, arr+3);
        cout << arr[0] << endl;
        t--;
    }
    return 0;
}