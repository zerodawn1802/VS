#include <bits/stdc++.h>
using namespace std;
void process()
{
	int n, k;
    cin >> n >> k;
	vector <int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	long long result = 0;
	int tmp;
	for (int i = 0; i < n; i++)
    {
		tmp = k - a[i];
		if (tmp < a[i]) break;
		int res1 = -1, res2 = -1;
		int l = i + 1, r = n - 1;
		while (l <= r)
        {
			int mid = (l + i) / 2;
			if (a[mid] <= tmp)
            {
				if (a[mid] == tmp) res1 = mid;
				l = mid + 1;
			}
            else r = mid - 1;
		}
		l = i + 1, r = n - 1;
		while (l <= r)
        {
			int mid = (l + r) / 2;
			if (a[mid] < tmp)
            {
				l = mid + 1;
			}
			else
            {
				if (a[mid] == tmp) res2 = mid;
				r = mid - 1;
			}
		}
		if (res1 != -1) result += (res1 - res2) + 1;
	}
	cout << result << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--) process();
	return 0;    
}