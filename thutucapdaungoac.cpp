#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        int dd[1005];
        for(int i = 0; i < 1005; i++) dd[i] = 1;
        vector<int> a;
        int k1 = 1;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                a.push_back(k1);
                k1++;
            }
            else if(s[i] == ')')
            {
                for(int j = k1 - 1; j >= 1; j--)
                {
                    if(dd[j] == 1)
                    {
                        a.push_back(j);
                        dd[j] = 0;
                        break;
                    }
                }
            }
        }
        for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
        cout << endl;
    }
}