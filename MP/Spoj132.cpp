#include<bits/stdc++.h>
using namespace std;
vector <pair<int, int> > s;
int cmp(pair<int, int> a, pair<int, int> b)
{
	if(a.first < b.first) return 1;
	if(a.first == b.first && a.second < b.second) return 1;
	return 0;
}
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		s.push_back({a, b});
	}
	sort(s.begin(), s.end(), cmp);
	int t = 1, f = 0;
	for(int i = 1; i < n; i++)
	{
		if(s[i].first >= s[f].second)
		{
			t++;
			f = i;
		}
		else if(s[i].second < s[f].second) f = i;
	}
	cout << t;
}
