#include <bits/stdc++.h>
using namespace std;
const double eps = 1e - 8;
inline bool eq(const double& a, const double& b)
{ 
	return fabs(a - b) <= eps * fabs(a);
}
inline bool le(const double& a, const double& b)
{
	return a < b && !eq(a, b);
}
inline bool gr(const double& a, const double& b)
{
	return a > b && !eq(a, b);
}
double a[20202];
inline int next(int x, int n)
{
  if (x < n - 1) return x + 1;
  return 0;
}
inline double diff(const double& a, const double& b)
{
  double res = a - b;
  if (le(res, 0)) res += 360;
  return res;
}
int main()
{
  int n, r;
  int nc = 0;
  while (std::cin >> n >> r)
  {
    if (n == 0 && r == 0) break;
    for (int i = 0; i < n; ++i) cin >> a[i];
	sort(a, a + n);
    long long ans = 1ll * n * (n - 1) * (n - 2) / 6;
    int j = 0;
    int d = 1;
    for (int i = 0; i < n; ++i)
	{
      while (d < n && !gr(diff(a[next(j, n)], a[i]), 180)) ++d, j = next(j, n);
      int x = d - 2;
      ans -= 1ll * x * (x + 1) / 2;
      --d;
    }
	cout << "Case " << ++nc << ": " << ans << '\n';
  }
}
