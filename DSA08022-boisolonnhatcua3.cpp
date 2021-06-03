#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, sum = 0;
		string res = "";
		cin >> n;
		priority_queue <int> q;
		priority_queue <int, vector<int>, greater<int> >q1, q2;
		for(int i = 0; i < n; i++)
		{
			int so;
			cin >> so;
			q.push(so);
			sum += so;
			if (so % 3 == 1) q1.push(so);
			if (so % 3 == 2) q2.push(so);
		}
		if ((sum % 3 == 1 && q1.empty() && q2.size() < 2) || (sum % 3 == 2 && q2.empty() && q1.size() < 2))
			cout << -1 << endl;
		else
		{
			int s1 = -1, s2 = -1;
			if (sum % 3 == 1) 
			{
				if(q1.empty())
				{
					s1 = q2.top();
					q2.pop();
					s2 = q2.top();
				}
				else s1 = q1.top(); 
			}
			if (sum % 3 == 2)
			{
				if (q2.empty())
				{
					s1 = q1.top();
					q1.pop();
					s2 = q1.top();
				}
				else s1 = q2.top();
			}
			while (!q.empty()) 
			{
				int tmp = q.top();
				if (tmp != s1 && tmp != s2) 
				{
					res = res + (char)(tmp + '0');
				}
				else
				{
					if (s1 == tmp) s1 = -1;
					else if (s2 == tmp) s2 = -1;
				}
				q.pop();
			}
			if (res == "") cout << -1 << endl;
			else
			{
				while (res[0] == '0' && res.length() > 1) res.erase(0, 1);
				cout << res << endl;
			}
		}
	}
	return 0;
}