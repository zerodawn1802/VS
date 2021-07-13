#include <bits/stdc++.h>
using namespace std;
bool compare(int a, int b)
{
	if(a > b) return true;
	else return false;
}
int main()
{
	int n;
	cin >> n;
	int a[100005];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n, compare);
	if(n % 2 == 1)
	{
		int k = a[(n + 1) / 2 - 1];
		int t, h = 1, res = 0;
    	do
    	{
    		t = k % 2;
    		k = k / 2;
    		h *= 10;
    		cout << t;
		}while(k > 0);
	}
	else
	{
		int k = a[n / 2];
		cout << k << endl;
		int t, h = 1, res = 0;
    	do
    	{
    		t = k % 2;
    		k = k / 2;
    		h *= 10;
    		cout << t;
		}while(k > 0);
	}
}
