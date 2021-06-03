#include<bits/stdc++.h>
using namespace std;
string chuanhoa(string s)
{
    string tmp = "";
    for(char c : s)
        if (c == '(' || c == ')') tmp = tmp + c;
    return tmp;
}
void solve()
{
    string s;
    getline(cin, s);
    s = chuanhoa(s);
    vector<int> res (s.length());
    stack<pair<int, int> > st;
    int it = 1;
    for(int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (c == '(') 
        {
            st.push(make_pair(i, it++));
        }
        else
        {
            res[i] = res[st.top().first] = st.top().second;
            st.pop();
        }
    }
    for(int i: res) cout << i << ' ';
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--) solve();
}