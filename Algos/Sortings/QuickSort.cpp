#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll partition(vector<ll>& arr, ll start, ll end)
{
    ll pivot = arr[end];
    ll p_index = start;
    for(ll i = start; i < end; ++i)
    {
        if(arr[i] <= pivot)
        {
            ll temp = arr[i];
            arr[i] = arr[p_index];
            arr[p_index] = temp;
            ++p_index;
        }
    }
    ll temp = arr[end];
    arr[end] = arr[p_index];
    arr[p_index] = temp;
    return p_index;
}

void quick_sort(vector<ll>& arr, ll start, ll end)
{
    if (start >= end)
        return;
    ll p_index = partition(arr, start, end);
    quick_sort(arr, start, p_index - 1);
    quick_sort(arr, p_index + 1, end);
    return;
}


int main()
{
    vector<ll> arr;
    ll n, num;
    cin >> n;
    ll size = n;
    while(n--){
        cin >> num;
        arr.push_back(num);
    }
    quick_sort(arr, 0, size - 1);
    for (ll i = 0; i < size; ++i)
        cout << arr[i] << " ";
    return 0;
}