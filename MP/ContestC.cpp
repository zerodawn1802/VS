#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		cin >> str;
		long long dem = 0, res = 0;
		for(int i = str.size() - 1; i >= 0; i--)
		{
			if(str[i] == 'b') dem++;
			else if(str[i] == 'a')
			{
					dem = dem % 1000000007;
				res += dem;
				dem *= 2;
			}
		}
		res = res % 1000000007;
		cout << res << endl;
	}
}
