/* Program to find if the given array has elements that can add up
to the target sum*/

#include<bits/stdc++.h>

using namespace std;

bool can_sum(long long target, vector<long long> arr)
{
    vector<int> res(target + 1, 0);
    res[0] = 1;

    for(long long i = 0; i < target + 1; ++i)
    {
        if(res[i] == 1)
        {
            for(long long j = 0; j < arr.size(); ++j)
            {
                if(i + arr[j] == target)
                    return true;
                if(i + arr[j] < target)
                    res[i + arr[j]] = 1;
            }
        }
    }
    return false;
}

int main()
{
    long long target, n;
    cin >> target >> n;
    vector<long long> arr(n);
    for(long long i = 0; i < n; ++i) cin >> arr[i];
    if (can_sum(target, arr))
        cout << "True";
    else
        cout << "False";
    return 0;
}