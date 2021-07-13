#include <bits/stdc++.h>
using namespace std;
int dd[21] = {0}, a[21];
void process(int k, int n)
{
    for(int i = 1; i <= n; i++)
	{
        if (!dd[i])
		{
            a[k] = i;
            dd[i] = 1;
            if (k == n)
            {
            	for(int i = 1; i <= n; i++) cout << a[i];
    			cout << endl;
			}
            else process(k + 1, n);
            dd[i] = 0;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    process(1, n);
}
