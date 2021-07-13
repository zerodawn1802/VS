#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin >> str;
	if(str.size() == 1) cout << "0";
	else
	{
		int n = 0;
		for(int i = 0; i < str.size(); i++)
		{
			int so = str[i] - '0';
			n += so;
		}
		int dem = 1;
		while(n > 9)
		{
			int d = 0;
			while(n != 0)
			{
				int b = n % 10;
				d += b;
				n /= 10;
			}
			dem++;
			n = d;
		}
		cout << dem;
	}
}
