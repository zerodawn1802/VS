#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sobao = 5000;
    for(int i = 0; i <= (n / 3); i++)
    {
        int b3 = i*3;
        int b5 = n - b3;
        if(b5 % 5 == 0)
        {
            int bao = i + b5 / 5;
            if(bao < sobao)
            {
                sobao = bao;
            }
        }
    }
    if(sobao == 5000) cout << "-1";
    else cout << sobao;
    return 0;
}
