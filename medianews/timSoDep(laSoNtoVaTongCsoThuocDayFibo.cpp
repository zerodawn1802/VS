/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include <bits/stdc++.h>
using namespace std;
vector<int> fibo;
int dd[50], a = 0, b = 1;
fibo.push_back(1);
void fiBo()
{
	int k = 1;
	while(k < 50)
	{
		k++;
		a = b + a;
		fibo.push_back(a);
		b = a + b;
		fibo.push_back(b);
	}
}
int main()
{
	fibo(); 
}
