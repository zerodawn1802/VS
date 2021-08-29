#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, res;
        cin >> a >> b;
        if(a * 2 <= b)
        {
            if(b % 2 == 0)
            {
                res = b / 2 - 1;
            }
            else res = (b - 1) / 2;
        }
        else if(a == b) res = 0;
        else
        {
            while(1)
            {
                int c = b % a;
                if(c != 0 && a + c <= b)
                {
                    res = c;
                    break;
                }
            }
        }
        cout << res << endl;
    }
}