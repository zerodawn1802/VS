#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int process(string a, int b)
{
	int k = (int)a[0] - '0';
	for(int i = 1; i < a.size(); i++)
	{
		int c = (int)a[i] - '0';
		if(k<b)
		{
			k = k*10 + c;
		}
		if(k>=b) k = k%b;
	}
	return k%b;
}
int main()
{
	string a;
	int b;
	getline(cin,a);
	cin >> b;
	cout << process(a,b);
}
