#include <bits/stdc++.h>
using namespace std;
struct data
{
	int bt;
	int km;
};
int compare(data a, data b)
{
	if(a.bt > b.bt) return 0;
	return 1;
}
int main ()
{
	int n;
	data bo[100005];
	int t;
	cin >> n >> t;
	int a, b;
	for(int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		bo[i].bt = a + b;
		bo[i].km = a / 2;
	}
	sort(bo + 1, bo + n + 1, compare);
	int dem = 0;
	for(int i = 1; i <= n; i++)
	{
		if(t >= bo[i].bt)
		{
			dem++;
			t -= bo[i].bt;
		}
		else
		{
			int kmmax = bo[i].km;
			for(int j = i; j >= 1; j--) if(bo[j].km > kmmax) kmmax = bo[j].km;
			t += kmmax;
			if(t >= bo[i].bt)
			{
				dem++;
				t -= bo[i].bt;
			}
			else break;
		}
	}
	cout << dem;
	return 0;
}
