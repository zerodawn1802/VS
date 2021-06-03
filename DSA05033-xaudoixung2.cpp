#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int a[s.length()][s.length()] = {0};
    for(int len = 1; len <= s.length(); len++)
        for(int i = 0; i <= s.length() - len; i++)
        {
            int j = i + len - 1;
            if (len == 1)
            {
                a[i][j] = 1;
                continue;
            }
            if (len == 2)
            {
                a[i][j] = 1 + (s[i] == s[j]);
                continue;
            }
            a[i][j] = max(a[i + 1][j], a[i][j - 1]);
            if (s[i] == s[j]) a[i][j] = max(a[i][j], a[i + 1][j - 1] + 2);
        }
    cout << s.length() - a[0][s.length() - 1] << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}