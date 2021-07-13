#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	float delta = b * b - 4 * a * c;
	if(a == 0 && b == 0 && c == 0) cout << "-1";
	else if(delta < 0) cout << "0";
	else if(delta == 0)
	{
		cout << "1" << endl;
		printf("%.5f",- b / 2 * a);
	}
	else if(delta > 0)
	{
		cout << "2" << endl;
		float ng1 = (-(float)b + sqrt(delta)) / (float)(2 * a);
		float ng2 = (-(float)b - sqrt(delta)) / (float)(2 * a);
		if(ng > 0) printf("%.5f\n%.5f", -ng, ng);
		else printf("%.5f\n%.5f", ng, -ng);
	}
}
