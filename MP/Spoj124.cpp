#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	int dem = 0;
	while(n != 0)
	{
		int b = n % 10;
		if(b == 4 || b == 7)
		{
			dem++;
		}
		n /= 10;
	}
	if(dem == 4 || dem == 7) cout << "YES";
	else cout << "NO";
}
