#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        int k = 0, l = b.size(), kt = 0;
        if(a.size() < b.size()) cout << "NO" << endl;
        else
        {
            for(int i = 0; i < a.size(); i++)
            {
                if(a[i] == b[k] && kt == 0)
                {
                    kt = 1;
                    k++;
                }
                else if(a[i] == b[k] && kt == 1)
                {
                    k++;
                }
                else if(kt == 1 && a[i] != b[k])
                {
                    kt = 0;
                    k = 0;
                }
                if(k == l) break;
            }
            if(kt == 1) cout << "YES";
            else cout << "NO";
            cout << endl;
        }
    }
}