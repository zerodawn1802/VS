#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        string Num;
        cin >> Num;
        if(Num == "0") break;
        long long S = 0;
        for(int i = 0; i < Num.length(); i++)
        {
            int so = Num[i] - '0';
            if(so > 4) so--;
            S = S * 9 + so;
        }
        cout << Num << ": " << S << endl;
    }
    return 0;
}
