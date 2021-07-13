#include <bits/stdc++.h>
using namespace std;
void process(int n, int k)
{
	int d = 0;
	vector<int> s(k+1);
	for(int i = 1; i <= k; i++)
	{
		s[i] = i;
	}
	do
	{
		for(int i = 1; i <= k; i++)
		{
			cout << s[i] << " ";
		}
		cout << endl;
		int c = k;
		while(c > 0 && s[c] == n - k + c) c--;
		if(c > 0)
		{
			s[c]++;
			for(int j = c + 1; j <= k; j++)
			{
				s[j] = s[c] + j - c;
			}
		}
		else d = 1;
	} while(d != 1);
}
int main()
{
	int n, k;
	cin >> n >> k;
	process(n, k);
}
