#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int j = 1; j <= t; j++)
	{
		int n;
		cin >> n;
		int k = n - 1;
		for(int i = 1; i <= k / 9; i++) cout << "1234567890";
		int b = k % 9;
		for(int i = 1; i <= b; i++) cout << char('0' + i);
		for(int i = b + 1; i >= 2; i--) cout << char('0' + i);
		for(int i = 1; i <= k / 9; i++) cout << "098765432";
		cout << "1" << endl;
	}
}
