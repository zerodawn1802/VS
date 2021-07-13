#include <iostream>
#include <cmath>
using namespace std;
void process(int a, int b)
{
	int dem=0;
	for(int i=a;i<=b;i++)
	{
		int c=0;
		if(i!=1)
		{
			for(int j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)
				{
					c++;
					break;
				}
			}
			if(c==0) dem++;
		}
	}
	cout << dem << endl;
	for(int i=a;i<=b;i++)
	{
		if(i!=1)
		{
			int c=0;
			for(int j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)
				{
					c++;
					break;
				}
			}
			if(c==0) cout << i << " ";
		}
	}
}
int main()
{
	int n,m;
	cin >> n >> m;
	process(n,m);
	return 0;
}
