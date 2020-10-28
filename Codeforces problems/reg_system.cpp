// Problem link= https://codeforces.com/problemset/problem/4/C

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n;
    long i,j,count;
    cin >> n;
    vector<string> database;
    for(i = 0; i < n; ++i)
    {
        string temp;
        cin >> temp;
        database.push_back(temp);
    }
    for(i = 0; i < database.size(); ++i)
    {
        bool flag = true;
        if(i==0)
            cout << "OK";
        else
        {
            string temp = database[i];
            count = 0;
            for(j = 0; j < i; ++j)
            {
                if(!temp.compare(database[j]))
                {
                    flag = false;
                    count += 1;
                    string num_app = to_string(count);
                    if(count > 1)
                        temp.pop_back();
                    temp.append(num_app);
                }
            }
            if(flag)
                cout << "\nOK";
            else
            {   
                database[i] = temp;
                cout << "\n" << temp;
            }
        }
    }
    return 0;
}