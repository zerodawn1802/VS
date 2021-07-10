//Alphabetical Strings
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s = "abcdefghijklmnopqrstuvxywz";
    while(t--)
    {
        int dd[26] = {0};
        string str;
        cin >> str;
        int tmp = -1;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == s[0]) tmp = i;
        }
        if(str == "a") cout << "YES" << endl;
        else if(tmp == -1) cout << "NO" << endl;
        else
        { 
            int tmp1 = tmp - 1, tmp2 = tmp + 1;
            int k = 1, dem = 1;
            while(1)
            {
                if(str[tmp1] == s[k])
                {
                    tmp1--;
                    k++;
                    dem++;
                }
                else if(str[tmp2] == s[k])
                {
                    tmp2++;
                    k++;
                    dem++;
                }
                else
                {
                    dem = -1;
                    break;
                }
                if(tmp1 == -1 && tmp2 == str.size()) break;
            }
            if(dem == str.size()) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}