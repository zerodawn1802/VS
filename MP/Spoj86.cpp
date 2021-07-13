#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	vector<int> a1(t), a2(t), a3(t);
	int dem = 0;
	for(int i = 0; i < t; i++)
	{
		cin >> a1[i] >> a2[i] >> a3[i];
		if(a1[i] + a2[i] + a3[i] >= 2) dem++;
	}
	cout << dem;
}
