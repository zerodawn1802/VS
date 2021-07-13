#include <iostream>
using namespace std;
struct joker
{
	int tr;
	int s;
} typedef joker;
int main ()
{
	int n, k;
	cin >> n >> k;
	joker dd[100005];
	for (int i = 1; i <= n; i++)
	{
		dd[i].tr = i - 1;
		dd[i].s = i + 1;
	}
	for (int i = 1; i <= k; i++)
	{
		int a, b;
		cin >> a >> b;
		dd[dd[a].tr].s = dd[a].s;
		dd[dd[a].s].tr = dd[a].tr;
		dd[dd[b].tr].s = a;
		dd[a].tr = dd[b].tr;
		dd[a].s = b;
		dd[b].tr = a;
	}
	int st, e;
	for (int i = 1; i <= n; i++)
	{
		if (dd[i].tr == 0)
			st = i;
		if (dd[i].s == n + 1)
			e = i;
	}
	while(1)
	{
		if(st == e)
		{
			cout << e;
			break;
		}
		cout << st << " ";
		st = dd[st].s;
	}
	return 0;
}
