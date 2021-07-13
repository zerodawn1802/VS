#include <iostream>
#include <vector>
using namespace std;
void process(vector<char> vt)
{
	for(int i=0;i<=vt.size();i++)
	{
		int c=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==2) vt[i]='*';
	}
}
int main()
{
	vector<char> a;
	cin >> a;
	process(a);
	cout << a;
	return 0;
}
