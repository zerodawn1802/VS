#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a1[n + 1][n + 1], a2[n + 1][n + 1];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) cin >> a1[i][j];
    }
    if(n == 2) cout << a1[1][2] / 2 << " " << a1[1][2] / 2;
    else
    {
        for(int i = 2; i < n; i++)
        {
            a2[i][i + 1] = a1[1][i] - a1[1][i + 1];
            if(i == 2) cout << a1[1][2]-(a2[i][i + 1] + a1[i][i + 1]) / 2 << " ";
            cout << (a2[i][i + 1] + a1[i][i + 1]) / 2 << " ";
            if(i == n - 1) cout << a1[i][i + 1] - (a2[i][i + 1] + a1[i][i + 1]) / 2;
        }
    }
}
