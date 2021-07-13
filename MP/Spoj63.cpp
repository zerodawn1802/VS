#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float tong = 0;
	for(int i = 0; i < n; i++)
	{
		float c;
		cin >> c;
		tong += c;
	}
	printf("%.12f", tong / (float)n);
}

