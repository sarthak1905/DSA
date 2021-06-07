#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        bool mid = false;
        int mid_index = n/2;
        for(int i = 0; i < n; ++i)
        {
            if(s[i] == '0')
                count++;
        }
        if (count > 1 && count % 2 == 1 && s[mid_index] == '0')
            mid = true;
        if (count == 0)
            cout << "DRAW\n";
        else if(n > 1 && n % 2 == 1 && (count == n || mid))
            cout << "ALICE\n";
        else 
            cout << "BOB\n";
    }
    return 0;
}