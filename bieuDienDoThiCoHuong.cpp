#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a[n+1];
        for(int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x].push_back(y);
        }
        for(int i = 1; i <= n; i++)
        {
            cout << i << ": ";
            for(int j = 0; j < a[i].size(); j++) cout << a[i][j] << " ";
            cout << endl;
        }
    }
}