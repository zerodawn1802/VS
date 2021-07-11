#include <bits/stdc++.h>
using namespace std;
void process()
{
    int n;
    cin >> n;
    int a[n + 5], b[n + 5];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];
    vector<int> c;
    int tongam = 0, tongduong = 0;
    for(int i = 1; i <= n; i++)
    {
        int k = a[i] - b[i];
        c.push_back(k);
        if(k >= 0)
        {
            tongduong += k;
        }
        else 
        {
            tongam += k;
        }
    }
    if(tongam + tongduong != 0) cout << "-1" << endl;
    else
    {
        cout << tongduong << endl;
        while(1)
        {
            for(int i = 1; i <= n; i++)
            {
                if(c[i - 1] > 0)
                {
                    cout << i << " ";
                    c[i - 1]--;
                    for(int j = 1; j <= n; j++)
                    {
                        if(c[j - 1] < 0)
                        {
                            cout << j << endl;
                            c[j - 1]++;
                            break;
                        }
                    }
                    break;
                }
            }
            int dem = 0;
            for(int i = 0; i < n; i++) if(c[i] == 0) dem++;
            if(dem == n) break;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        process();
    }
}