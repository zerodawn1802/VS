#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	cin.ignore();
	for(int i = 1; i <= t; i++)
	{
		string str, s1 = "dung", s2 = "lon hon", s3 = "nho hon";
		getline(cin, str);
		if(str == s1) cout << "2" << endl;
		if(str == s3) cout << "3" << endl;
		if(str == s2) cout << "1" << endl;
	}
}

