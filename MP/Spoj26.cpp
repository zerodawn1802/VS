#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> s(10), t(10);
	for(int i = 0; i < 10; i++)
	{
		cin >> s[i];
	}
	int dd[100] = {0};
	for(int i = 0; i < 10; i++)
	{
		t[i] = s[i] % 42;
		dd[t[i]]++;
	}
	int c = 0;
	for(int i = 0; i < 42; i++)
	{
		if(dd[i] != 0) c++;
	}
	cout << c;
	return 0;
}
