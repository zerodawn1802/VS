#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], dd[n] = {0};
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        while(1)
        {
            for(int i = 0; i < n - 1; i++)
            {
                if(a[i] > a[i + 1])
                {
                    swap(a[i], a[i + 1]);
                    dd[i]++;
                    dd[i + 1]++;
                }
            }
            int dem = 0;
            for(int i = 0; i < n - 1; i++)
            {
                if(a[i] <= a[i + 1]) dem++;
            }
            if(dem == n - 1) break;
        }
        int kt = 1;
        for(int i = 0; i < n; i++)
        {
            if(dd[i] % 2 != 0)
            {
                cout << "NO" << endl;
                kt = 0;
                break;
            }
        }
        if(kt == 1) cout << "YES" << endl;
    }
}