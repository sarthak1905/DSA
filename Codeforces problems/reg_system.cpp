// Problem link= https://codeforces.com/problemset/problem/4/C

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    long i,j,count;
    cin >> n;
    unordered_map<string,long> database;
    vector<string> output;
    for(i = 0; i < n; ++i)
    {
        string temp;
        cin >> temp;
        if(database.find(temp)==database.end())
        {
            database[temp] = 1;
            output.push_back("OK");
        }
        else
        {
            database[temp] +=1;
            temp.append(to_string(database[temp]-1));
            output.push_back(temp);
        }
    }
    for(i = 0; i < n; ++i)
    {
        if(i < n-1)
            cout << output[i] << endl;
        else
            cout << output[i];
    }
    return 0;
}