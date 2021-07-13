#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> s;
	for(int i = 1; i <= n; i++)
	{
		int a, b;
		cin >> a;
		if(a == 1) cout << s.size() << endl;
		else if(a == 2)
		{
			if(s.size() == 0) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else if(a == 3)
		{
			cin >> b;
			s.push_back(b);
		}
		else if(a == 4)
		{
			if(s.size() != 0) s.erase(s.begin());
		}
		else if(a == 5)
		{
			if(s.size() != 0) cout << s.front() << endl;
			else cout << "-1" << endl;
		}
		else if(a == 6)
		{
			if(s.size() != 0) cout << s.back() << endl;
			else cout << "-1" << endl;
		}
	}
}
