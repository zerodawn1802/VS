#include <bits/stdc++.h>
using namespace std;
int dd[1000005] = {0};
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> check;
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if(dd[a] == 0) check.push_back(a);
            dd[a]++;
        }
        int res = 0;
        for(int i = 0; i < check.size(); i++)
        {
            if(dd[check[i]] > 1) res += dd[check[i]];
            dd[check[i]] = 0;
        }
        cout << res << endl;
    }
}