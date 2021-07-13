#include<bits/stdc++.h>
using namespace std;
int dd[1000006];
void process()
{
    for(int i = 0; i < 1000006; i++) dd[i] = 0;
    dd[0] = dd[1] = 1;
    for(int i = 2; i <= sqrt(1000006); i++)
	{
        if(dd[i] == 0)
		{
            for(int j = i * i; j < 1000006; j += i) dd[j] = 1;
        }
    }
}
long long l, r;
void in()
{
    cin >> l >> r;
}
void out()
{
    l = sqrt(l), r = sqrt(r);
    int res = 0;
    for(int i = l ; i <= r ; i++)
	{
        if(dd[i] == 0) res++;
    }
    cout << res << endl;
}
int main(){
    process();
    int g;
    cin >> g;
    for(int k = 1; k <= g; k++)
	{
        in();
    	out();
    }
    return 0;
}
