#include <iostream>
using namespace std;
int m = 1;
long long pow(int a, int n)
{
	if (n == 0) return 1;
	long long tmp = pow(a, n / 2);
	if (n & 1) return tmp * tmp % m * a % m;
	return tmp * tmp % m;
}

int main()
{
	string s;
	int k, b;
	cin >> s >> k >> b >> m;
	
	int n = s.length();
	long long ans = 0;
	long long num = 0;
	for (int i = 0; i < k; ++i) {
		num += pow(b, i) * (s[k - i - 1] - '0');
		num %= m;
	}
	ans += num;

	long long p = pow(b, k - 1);
	for (int i = 0; i < n - k; ++i)
	{
		num = num + m - p * (s[i] - '0') % m;
		num *= b;
		num += s[k + i] - '0';
		num %= m;
		ans += num;
	}
	cout << ans << endl;
	return 0;
}
