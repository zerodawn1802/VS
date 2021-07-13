#include <bits/stdc++.h>
#include <stack>
using namespace std;
string xoacachthua(string x)
{
    string rs = "";
    for(int i = 0; i < x.length(); i++)
    {
        if(x[i] != ' ') rs += x[i];
    }
    return rs;
}
string xoa1(string x)
{
    stack<char> s;
    stack<int> index;
    int dlt[300] = {0};
    for(int i = 0; i < x.length(); i++)
    {
        if(x[i] == ')')
        {
            int flag = 0;
            while(s.top() != '(')
            {
                char top = s.top();
                if(top == '+' || top == '-') flag = 1;
                s.pop();
                index.pop();
            }
            if(flag == 0)
            {
                dlt[index.top()] = 1;
                dlt[i] = 1;
            }
            s.pop();
            index.pop();
        }
        else
        {
            s.push(x[i]);
            index.push(i);
        }
    }
    string rs = "";
    for(int i = 0; i < x.length(); i++)
    {
        if(dlt[i] == 0) rs += x[i];
    }
    return rs;
}

string xoa2(string x)
{
    stack<char> s;
    stack<int> index;
    int dlt[300] = {0};
    for(int i = x.length() - 1; i >= 0; i--)
    {
        if(x[i] == '(')
        {
            int flag = 1;
            if(i == 0 || x[i - 1] != '-') flag = 0;
            while(s.top() != ')')
            {
                s.pop();
                index.pop();
            }
            if(flag == 0)
            {
                dlt[index.top()] = 1;
                dlt[i] = 1;
            }
            s.pop();
            index.pop();
        }
        else
        {
            s.push(x[i]);
            index.push(i);
        }
    }
    string rs = "";
    for(int i = 0; i < x.length(); i++)
    {
        if(dlt[i] == 0) rs += x[i];
    }
    return rs;
}
int main ()
{
    string str = "";
    int n;
    cin >> n;
    cin.ignore();
    while(1)
    {
        if(n == 0) break;
        n--;
        getline(cin, str);
        string str = xoacachthua(str);
        string s1 = xoa1(str);
        string s2 = xoa2(s1);
        cout << s2 << endl;
    }
    return 0;
}
