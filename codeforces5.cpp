#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        int s = 111111111;
        int dem = 0;
        while(n != 0)
        {
            if(n >= s)
            {
                n -= s;
                dem += 1;
            }
            else
            {
                if(s % 10 == 0) s /= 10;
                else s -= 1;
            }
        }
        cout << dem << endl;
    }
}