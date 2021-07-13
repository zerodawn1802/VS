#include <iostream>
#include <cmath>
using namespace std;
void process(int k)
{
	for(int i = 2; i <= k; i++)
	{
		int c=0;
		for(int j = 2; j <= sqrt(i); j++)
		{
			if(i%j==0) c++;
		}
		if(c==0) cout << i << " ";
	}
}
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		int k;
		cin >> k;
		process(k);
		cout << endl;
	}
	return 0;
}
