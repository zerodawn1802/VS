#include<iostream>
#include<math.h>
using namespace std;
int fix(int x, int a)
{
	int y = 1000000, kq = 0, k;
	while(y != 0)
	{
		k = x / y;
		x = x - k * y;
		if(k == a) k = 11 - a;
		kq = kq * 10 + k;
		y = y / 10;
	}
	return kq;
}
int main()
{
	int a, b, min, max;
	cin >> a >> b;
	min = fix(a, 6) + fix(b, 6);
	max = fix(a, 5) + fix(b, 5);
	cout << min << " " << max << endl;
}
