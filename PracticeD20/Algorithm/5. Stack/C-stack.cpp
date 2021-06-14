#include<bits/stdc++.h>
using namespace std;
bool ex(char c)
{
    switch (c)
        case '+':
        case '-':
        case '/':
        case '*':
            return 1;
    return 0;
}
int main()
{
    string str;
    stack <string> s;
    cin >> str;
    for(int i = 0; i < str.length(); i++)
    {
        if (ex(str[i]))
        {
            string s1 = s.top();
            s.pop();
            string s2 = s.top();
            s.pop();
            s.push(str[i] + s2 + s1);
        }
        else 
        {
            string tmp = "";
            tmp += str[i];
            s.push(tmp);
        }
    }
    cout << s.top() << endl;
}