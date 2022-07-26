#include<iostream>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr;
        for(ll i = 0; i < n; ++i)
        {
            ll num;
            cin >> num;
            arr.push_back(num);
        }
        ll length = 1, diff = 0, least = 9999999999, most = -9999999999;
        for(ll i = 0; i < n; ++i)
        {
            if(arr[i] <= least)
                least = arr[i];
            if(arr[i] >= most)
                most = arr[i];
            
            diff = max(diff, abs(most - least));
            if (diff < most)
            {
                least = 9999999999;
                most = -9999999999;
                length = 1;
                continue;
            }
            length++;
        }
        cout << length << endl;
    }
    return 0;
}