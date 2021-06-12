#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll count_digits(ll n)
{
    return floor(log10(n) + 1);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll l, r, ans = 0;
        cin >> l >> r;
        while(l != 0 || r != 0)
        {
            ans += r - l;
            r /= 10;
            l /= 10;
        }
        cout << ans << endl;
    }
    return 0;
}