#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


void combine(vector<ll>& fh, vector<ll>& sh, vector<ll>& arr)
{
    ll i = 0, j = 0, k = 0;
    while(i < fh.size() && j < sh.size())
    {
        if(fh[i] <= sh[j]){
            arr[k] = fh[i];
            ++i;
        }
        else{
            arr[k] = sh[j];
            ++j;
        }
        ++k;
    }
    while(j < sh.size()){
        arr[k] = sh[j];
        ++j;
    }
    while(i < fh.size()){
        arr[k] = fh[i];
        ++i;
    }
    return;
}


void merge_sort(vector<ll>& arr)
{
    ll size = arr.size();
    if (size <= 1)
        return;
    ll mid = size/2;
    vector<ll> first_half, second_half;
    for(ll i = 0; i < mid; ++i)
        first_half.push_back(arr[i]);
    for(ll i = mid; i < size; ++i)
        second_half.push_back(arr[i]);
    
    merge_sort(first_half);
    merge_sort(second_half);

    combine(first_half, second_half, arr);
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
    merge_sort(arr);
    for(ll i = 0; i < size; ++i)
        cout << arr[i] << " ";
    return 0;
} 