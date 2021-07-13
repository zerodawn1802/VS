/*Ho va ten: Nguyen Minh Phuong
Ma SV: B19DCAT141
Lop: D19CQAT01-B
Nhom: 23
STT: 26 */
#include<bits/stdc++.h>
using namespace std;
int const bc = 1e9 + 7;
priority_queue < int, vector <int>, greater<int> > q;
int main()
{
	int n, k;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> k;
		q.push(k);
	}
	long long res = 0;
	while(q.empty() == false)
	{
		int l, r;
		l = q.top();
		q.pop();
		r = q.top();
		q.pop();
		res = (res + 1ll * (l + r)) % bc;
		if(q.empty() == false)
		{
			q.push((l + r) % bc);
		}
	}
	cout << res << endl;
	return 0;
}
