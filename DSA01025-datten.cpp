#include<bits/stdc++.h>
using namespace std;
int n, k;
void sinh(int spt, string s, char tmp)
{
    if (spt > k)
    {
        cout << s << endl;
        return;
    }
    for(char i = tmp; i < n + 'A'; i++) sinh(spt + 1, s + i, i + 1);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        sinh(1, "", 'A');
    }
    return 0;
}