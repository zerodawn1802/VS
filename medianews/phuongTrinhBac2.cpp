/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	float dt = b * b - 4 * a *c;
	float x, x1, x2;
	if(dt < 0)
	{
		cout << "NO";
		return 0;
	}
	else if(dt == 0)
	{
		x = -b / (float)(2 * a);
		printf("%.2f", x);
	}
	else
	{
		x2 = (-b + sqrt(dt)) / (float)(2 * a);
		x1 = (-b - sqrt(dt)) / (float)(2 * a);
		printf("%.2f %.2f", x2, x1);
	}
}
