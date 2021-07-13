#include <bits/stdc++.h>
using namespace std;
int kt[100005];
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < 100005; i++) kt[i] = 1;
    kt[0] = kt[1] = 0;
    for(int i = 2; i < 100005; i++)
	{
        if(kt[i] == 0) continue;
        for(long long j = i*2; j < 100005; j += i)
		{ 
            kt[j] = 0;
        }
    }
	for(int i = 2; i <= n; i++)
	{
		if(kt[i] == 1) cout << i << " ";
	}
}
