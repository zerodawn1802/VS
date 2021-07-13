#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tong = 0;
	for(int i = 1; i <= 5; i++)
	{
		int a;
		cin >> a;
		tong += a;
	}
	if(tong % 5 == 0 && tong != 0) cout << tong / 5;
	else cout << "-1";
}
