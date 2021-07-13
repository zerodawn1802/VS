#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int b = n % 10, a = (n - b) / 10;
	int doia, doib;
	if(a == 0) doia = 2;
	else if(a == 1) doia = 7;
	else if(a == 2) doia = 2;
	else if(a == 3) doia = 3;
	else if(a == 4) doia = 3;
	else if(a == 5) doia = 4;
	else if(a == 6) doia = 2;
	else if(a == 7) doia = 5;
	else if(a == 8) doia = 1;
	else if(a == 9) doia = 2;
	if(b == 0) doib = 2;
	else if(b == 1) doib = 7;
	else if(b == 2) doib = 2;
	else if(b == 3) doib = 3;
	else if(b == 4) doib = 3;
	else if(b == 5) doib = 4;
	else if(b == 6) doib = 2;
	else if(b == 7) doib = 5;
	else if(b == 8) doib = 1;
	else if(b == 9) doib = 2;
	cout << doia * doib;
}
