#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, sum = 0;
        cin >> n;
        vector<ll> arr;
        for (ll i=0; i<n; ++i){
            ll num;
            cin >> num;
            sum += num;
            arr.push_back(num);
        }
        if (n == 1){
            cout << "0" << endl;
            continue;
        }
        if (sum % n){
            cout << "-1" << endl;
            continue;
        }
        ll mid = sum/n, less = 0, extra = 0, count = 0;
        sort(arr.begin(), arr.end());
        for(ll i=0; i<n; ++i){
            if(arr[i] < mid){
                less += mid - arr[i];
            }
            else if(arr[i] > mid){
                extra += (arr[i] - mid);
                count += 1;
            }
        }
        if (less == extra)
            cout << count;
        else if (less == 0 && extra == 0)
            cout << "0";
        else 
            cout << "-1";
        cout << endl;
    }
    return 0;
}