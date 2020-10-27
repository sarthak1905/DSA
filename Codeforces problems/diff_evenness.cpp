// Problem link- https://codeforces.com/problemset/problem/25/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,result;
    bool flag = false;
    cin >> n;
    long arr[n];
    for(int i = 0; i < n; ++i)
        cin >> arr[i];
    for(int i = 0; i < n; ++i)
    {
        if(i!=0 && i!=n-1)
        {
            if(arr[i]%2 != arr[i-1]%2 && arr[i]%2 != arr[i+1]%2)
            {
                flag = true;
                result = i + 1;
                break;
            }
        }
    }
    if(!flag)
    {
        if(arr[0]%2 != arr[1]%2)
            result = 1;
        else
            result = n;
    }
    cout << result;
    return 0;
}