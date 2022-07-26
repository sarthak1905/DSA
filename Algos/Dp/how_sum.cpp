/*Program to find if the given array has elements that can add up
to the target sum and then return that combination*/

#include<bits/stdc++.h>

using namespace std;

vector<long long> how_sum(long long target, vector<long long> arr)
{
    vector<vector<long long>> res(target + 1, vector<long long> (0));
    
    for(long long i = 0; i < arr.size(); ++i) 
        if (arr[i] <= target)
            res[arr[i]].push_back(arr[i]);    

    for(long long i = 1; i < target + 1; ++i)
    {
        if(!res[i].empty())
        {
            for(long long j = 0; j < arr.size(); ++j)
            {
                if(i + arr[j] == target)
                {
                    res[i + arr[j]] = res[i];
                    res[i + arr[j]].push_back(arr[j]);
                    return res[i + arr[j]];
                }
                if(i + arr[j] < target)
                {
                    res[i + arr[j]] = res[i];
                    res[i + arr[j]].push_back(arr[j]);
                }
            }
        }
    }
    return res[target];
}

int main()
{
    long long target, n;
    cin >> target >> n;
    vector<long long> arr(n);
    for(long long i = 0; i < n; ++i) cin >> arr[i];
    vector<long long> res = how_sum(target, arr);
    for(long long i = 0; i < res.size(); ++i)   cout << res[i] << " ";
    return 0;
}