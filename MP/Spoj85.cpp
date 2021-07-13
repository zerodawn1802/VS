#include<bits/stdc++.h>
using namespace std;
int dd[1000006];
void snt()
{
    for(int i = 0 ;  i < 1000006 ; i++) dd[i] = 1;
    dd[0] = dd[1] = 0;
    for(int i = 2 ; i <= sqrt(1000006) ; i++)
	{
        if(dd[i] == 1 )
		{
            for(int j = i * i ; j < 1000006 ; j += i) dd[j] = 0;
        }
    }
}
long long n;
void process(long long n)
{
    int dem = 0;
    for(int i = 2 ; i <= sqrt(n) ; i++)
	{
        if(dd[i] == 1) dem++;
    }
    cout << dem << endl;
}
int main()
{
    snt();
    int t = 1;
    cin >> t;
    while(t--)
	{
        cin >> n;
        process(n);
    }
    return 0;
}
