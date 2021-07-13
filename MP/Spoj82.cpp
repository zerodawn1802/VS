#include<bits/stdc++.h>
using namespace std;
void process(long long n)
{
    int dem = 0, dd = 0;
    for(int i = 2 ; i <= sqrt(n) ; i++)
	{
        if(n % i == 0)
		{
            dem++;
            int dd1 = 0;
            while(n % i == 0)
			{
                dd1++;
                n/=i;
            }
            if(dd1 > 1)
			{
                dd = 1;
                break;
            }
        }
    }
    if(n > 1) dem++;
    if(dem == 3 && dd == 0) cout << 1 << endl;
    else cout << 0 << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while(t--)
	{
		long long n;
		cin >> n;
        process(n);
    }
    return 0;
}
