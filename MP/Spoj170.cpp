#include <bits/stdc++.h>
using namespace std;
int main()
{
	int r, c, a, b;
	string str[100], s;
	cin >> r >> c;
	int k = r;
	for(int i = 0; i < r; i++)
	{
		cin >> s;
		str[i] = s;
		for(int j = c - 1; j >= 0; j--) str[i] += s[j];
	}
	for(int i = r; i < 2 * r; i++)
	{
		k--;
		str[i] = str[k];
	}
	cin >> a >> b;
	int m = a - 1, n = b - 1;
	if(str[m][n] == '.') str[m][n] = '#';
	else str[m][n] = '.';
	for(int i = 0; i < 2 * r - 1; i++) cout << str[i] << endl;
	cout << str[2 * r - 1];
}
