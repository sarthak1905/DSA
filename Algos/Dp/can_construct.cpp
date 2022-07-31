/* Program to find if the target string can be constructed by the words 
    given in the wordbank */

#include<bits/stdc++.h>

using namespace std;

int can_construct(string target, vector<string> wordbank)
{
    vector<int> arr(target.length() + 1, 0);
    arr[0] = 1;

    for(long long i = 0; i < target.length() + 1; ++i)
    {
        if(arr[i] == 1)
        {
            for(long long j = 0; j < wordbank.size(); ++j)
            {
                cout << "i + wordlength:" << i << " + " << wordbank[j].length();
                cout << "\tLength of substring is " << wordbank[j].length();
                string temp = target.substr(i, i + wordbank[j].length());
                cout << "\tChecking if " << temp << " is " << wordbank[j];
                if(target.substr(i, i + wordbank[j].length()) == wordbank[j])
                {
                    cout << "\tYes";
                    arr[i + wordbank[j].length()] = 1;
                }
                cout << endl;
            }
        }
    }

    return arr[target.length()]; 
}


int main()
{
    string target;
    getline(cin, target);
    long long n;
    cin >> n;
    vector<string> wordbank(n);
    cin.clear();
    fflush(stdin);
    for(long long i = 0; i < n; ++i) getline(cin, wordbank[i]);
    if(can_construct(target, wordbank) == 1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}