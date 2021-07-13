#include <bits/stdc++.h>
using namespace std;
int main()
{
	int s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	int a, b, c;
	int s;
	s = 4 * sqrt(s1 * s2 / s3) + 4 * sqrt(s1 * s3 / s2) + 4 * sqrt(s2 * s3 / s1);
	cout << s;
}

