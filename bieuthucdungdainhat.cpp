#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int res = 0;
        stack<int> s;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '(') s.push(i);
            else
            {
                if(!s.empty())
                {
                    s.pop();
                    res += 2;
                }
            }
        }
        cout << res << endl;
    }
}