#include<bits/stdc++.h>
using namespace std;
string kt = "+-*/^";
bool ex(char c)
{
    for(int i = 0; i < kt.length(); i++) if (kt[i] == c) return 1;
    return 0;
}
int com(char c)
{
    switch(c)
    {
        case '*':
        case '/':
            return 1;
        case '+':
        case '-':
            return 2;
        default:
            return 3;
    }
}
string change(string s)
{
    string res = "";
    stack <char> st;
    st.push('!');
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(')
        {
            st.push(s[i]);
            continue;
        }
        if(s[i] == ')')
        {
            while (st.top() != '(')
            {
                res = res + st.top();
                st.pop();
            }
            st.pop();
            continue;
        }
        if(s[i] != '(' && s[i] != ')' && (!ex(s[i])))
        {
            res = res + s[i];
            continue;
        }
        if(ex(s[i]))
        {
            while(com(st.top()) <= com(s[i]))
            {
                res = res + st.top();
                st.pop();
            }
            st.push(s[i]);
            continue;
        }
    }
    while(st.top() != '!')
    {
        res = res + st.top();
        st.pop();
    }
    return res;
}
int main()
{
    string s;
    cin >> s;
    cout << change(s) << endl;
    return 0;
}