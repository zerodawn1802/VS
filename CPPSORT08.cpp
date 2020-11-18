#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[100005], b[100005], c[5] = {0};
int main()
{
	cin.tie(0);
    ios_base::sync_with_stdio(false);
	int t;
    cin >> t;
	while(t--)
    {
		int n, m;
        cin >> n >> m;
		c[0] = 0; c[1] = 0; c[2] = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++)
        {
			cin >> b[i];
			if(b[i] == 1 || b[i] == 2 || b[i] == 0) c[b[i]]++;
		}
		sort(b, b + m);
		ll count = 0;
		for(int i = 0; i < n; i++)
        {
			if(a[i] == 0);
			else if(a[i] == 1) count += c[0];
			else if(a[i] == 2)
            {
				count += c[0]; count += c[1];
				int *p = upper_bound(b, b + m, 4);
				count += ((b + m) - p);
			}
			else if(a[i] == 3)
            {
				count += c[0]; count += c[1]; count += c[2];
				int *p = upper_bound(b, b + m, 3);
				count += ((b + m) - p);
			}
			else
            {
				count += c[0]; count += c[1];
				int *p = upper_bound(b, b + m, a[i]);
				count += ((b + m) - p);
			}
		}
		cout << count << endl;
	}
}