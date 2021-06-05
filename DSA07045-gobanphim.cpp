#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack <char> st1, st2;
    for(int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (c == '<')
        {
            if (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        else if (c == '>')
        {
            if (!st2.empty())
            {
                st1.push(st2.top());
                st2.pop();
            }
        }
        else if (c == '-')
        {
            if (!st1.empty())
            {
                st1.pop();
            }
        }
        else st1.push(c);
    }
    while (st1.size())
    {
        st2.push(st1.top());
        st1.pop();
    }
    while (st2.size())
    {
        cout << st2.top();
        st2.pop();
    }
}