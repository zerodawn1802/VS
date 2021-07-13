#include <iostream>
using namespace std;
void process()
{
	int n;
	cin >> n;
	int a[1001];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int tg;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] >= a[j])
			{ 
				tg=a[i]; 
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}
int main()
{
	process();
}
