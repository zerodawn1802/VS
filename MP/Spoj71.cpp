#include <iostream>
using namespace std;
struct name
{
	string HCM;
	int sl = 0;
} typedef name;
int main()
{
	name VN[3];
	for(int i = 1; i <= 2; i++)
	{
		VN[i].HCM = "";
		VN[i].sl = 0;
	}
	int n;
	cin >> n;
	string tg;
	for(int i = 1; i <= n; i++)
	{
		cin>>tg;
		if(i == 1)
		{
			VN[1].HCM = tg;
			VN[1].sl++;
		}
		else
		{
			if(tg == VN[1].HCM) VN[1].sl++;
			else
			{
				VN[2].HCM = tg;
				VN[2].sl++;
			}
		}
	}
	if(VN[1].sl > VN[2].sl) cout << VN[1].HCM;
	else if (VN[1].sl < VN[2].sl) cout << VN[2].HCM;
	return 0;
}
