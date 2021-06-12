#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int l = n;
        vector<int> arr;
        int most=0, least=n+1, maxi, mini, shortest, answer; 
        for(int i=0; i<n; ++i)
        {
            int power;
            cin >> power;
            if(power > most)
            {
                maxi = i;
                most = power;
            }
            if (power < least)
            {
                mini = i;
                least = power;
            }
            arr.push_back(power);
        }
        //cout << "Max is:" << maxi << " Min is:" << mini << endl;
        shortest = min(maxi + 1, min(mini + 1, min(n-maxi, n-mini)));
        answer = shortest;
        n -= shortest;
        if (shortest == (maxi + 1)){
            mini -= shortest;
            answer += min(mini + 1, n - mini);
        }
        else if (shortest == (mini +1)){
            maxi -= shortest;
            answer += min(maxi + 1, n - maxi);
        }
        else if (shortest == (l - maxi)){
            answer += min(mini + 1, n-mini);
        }
        else if (shortest == (l - mini)){
            answer += min(maxi + 1, n - maxi);
        }
        cout << answer << endl;   
    }
    return 0;
}