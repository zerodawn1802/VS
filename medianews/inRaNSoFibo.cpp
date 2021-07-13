#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	int fi0 = 0, fi1 = 1;
	printf("%d %d ", fi0, fi1);
	for(int i = 0; i < n - 2; i++)
	{
		int fi2 = fi0 + fi1;
		printf("%d ", fi2);
		fi0 = fi1;
		fi1 = fi2;
	}
	return 0;
}
