#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long Ax, Ay;
	cin >> Ax >> Ay;
	long long Bx, By;
	cin >> Bx >> By;
	long long Cx, Cy;
	cin >> Cx >> Cy;
	long long dd = (Bx - Ax) * (Cy - Ay) - (Cx - Ax) * (By - Ay);
	if(dd > 0) cout << "LEFT";
	else if(dd == 0) cout << "TOWARDS";
	else cout << "RIGHT";
	return 0;
}
