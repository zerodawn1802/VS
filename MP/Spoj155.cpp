#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str, a = "[END]";
	cin >> str;
	while(str != a)
	{
		int n;
		cin >> n;
		if(n % 5 == 0 || n % 5 == 2) cout << "Hanako" << endl;
		else cout << "Taro" << endl;
		cin >> str;
	}
}
