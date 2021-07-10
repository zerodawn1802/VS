#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1, tmp = "";
    getline(cin, s);
    cin >> s1;
    vector<string> c;
    for(int i = 0; i < s.size(); i++)
    {
        if(i != s.size() - 1 && s[i] != ' ' && s[i] != '\t') tmp += s[i];
        else if(i == s.size() - 1 && s[i] != ' ' && s[i] != '\t')
        {
            tmp += s[i];
            c.push_back(tmp);
        }
        else if(s[i] == ' ' || s[i] == '\t')
        {
            c.push_back(tmp);
            tmp = "";
        }
    }
    //for(int i = 0; i < c.size(); i++) cout << c[i] << " ";
    for(int i = 0; i < c.size(); i++) if(c[i] != s1) cout << c[i] << " ";
}