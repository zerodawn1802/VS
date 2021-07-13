#include <iostream>
using namespace std;
int bc(int n, int m)
{
	int a = n, b = m;
	int tmp;
	while( m!= 0)
	{
		tmp = n % m;
		n = m;
		m = tmp;
	}
	return (a * b) / n;
}
 
int main()
{
	int n, m;
	cin >> n >> m;
	int tong = bc(n, m), p1 = tong / n, p2 = tong / m;
	int S = 0;
	int slc = 0;
	for(int i = 1; i <= m; i++)
	{
		while(S < p2)
		{
			S += p1;
		}
		if(S == p2) S = 0;
		else 
		{
			slc++;
			S -= p2;
		}
	}
	cout << slc;
	return 0;
}
