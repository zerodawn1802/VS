#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    stack<char> chu;
    stack<int> so;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') chu.push(str[i]);
    }
    for(int i = str.size() - 1; i >= 0; i--)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            int k = str[i] - '0';
            so.push(k);
        }
    }
    while(!chu.empty())
    {
        cout << chu.top();
        chu.pop();
    }
    cout << endl;
    while(!so.empty())
    {
        cout << so.top();
        so.pop();
    }
}