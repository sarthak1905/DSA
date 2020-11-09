// Problem link - https://codeforces.com/problemset/status?my=on
// Date - 7/11/2020

#include<bits/stdc++.h>

using namespace std;

#define loop(i,a,b) for(i = a; i < b; ++i)
typedef long long ll;

int main()
{
    ll i, n, start_index = 0, end_index = 0, count = 0, temp;
    bool flag = false;
    cin >> n;
    ll arr[n];
    loop(i,0,n) cin >> arr[i];
    loop(i, 0, n)
    {
        if(i < n-1)
        {
            if(arr[i] < arr[i+1] && !flag)
                continue;
            else if(arr[i] < arr[i+1] && flag)
            {
                flag = false;
                end_index = i;
                temp = arr[end_index];
                arr[end_index] = arr[start_index];
                arr[start_index] = temp;
                count++;
                i--;
            }
            else
            {
                if(count > 0)
                {
                    cout << "no";
                    return 0;
                }
                if(!flag)
                {
                    flag = true;
                    start_index = i;
                }
            }
        }
        else
        {
            if(arr[i] < arr[i-1])
            {
                if(start_index > 0)
                {
                    if(arr[i] < arr[start_index -1])
                    {
                        cout << "no";
                        return 0;
                    }
                }
                end_index = i;
            }   
        }
    }
    cout << "yes" << endl << start_index + 1 << " " << end_index + 1; 
    return 0;
}