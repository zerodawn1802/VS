#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	while(!(a == 0 && b == 0 && c == 0))
	{
		if(a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b)
		{
			cout << "right" << endl;
		}
		else cout << "wrong" << endl;
		cin >> a >> b >> c;
	}
}
