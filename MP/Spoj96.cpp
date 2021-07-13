#include <bits/stdc++.h>
using namespace std;
struct ck
{
	int vt;
	int gia;
};
int ss1(ck a, ck b)
{
	if(a.gia > b.gia) return 0;
	else if(a.gia == b.gia)
	{
		if(a.vt > b.vt) return 0;
	}
	return 1;
}
int ss2(ck a, ck b)
{
	if(a.vt > b.vt) return 0;
	return 1;
}
int ss3(ck a, ck b)
{
	if(a.vt < b.vt) return 0;
	return 1;
}
int main()
{
	int n, k1, k2, k = 0;
	ck a[100006];
	while(1)
	{
		cin >> n >> k1 >> k2;
		if(n == 0 && k1 == 0 && k2 == 0) break;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i].gia;
			a[i].vt = i + 1;
		}
		k++;
		sort(a, a + n, ss1);
		sort(a, a + k1, ss2);
		sort(a + n - k2	, a + n, ss3);
		cout << "Case " << k << endl;
		for(int i = 0; i < k1; i++)
		{
			cout << a[i].vt << " ";
		}
		cout << endl;
		for(int i = n - k2; i < n; i++)
		{
			cout << a[i].vt << " ";
		}
		cout << endl;
	}
}

