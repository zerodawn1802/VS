#include <bits/stdc++.h>
using namespace std;
typedef struct data
{
    int close;
    int open;
    data(int c, int o)
    {
		close = c;
        open = o;
    }
    data()
    {
        close = 0;
        open = 0;
    }
} data;
data A[1000006];
int main()
{
    int n, k, a, b;
    cin >> n >> k;
    vector<int> ds;
    for(int i = 0; i < k; i++)
    {
        cin >> a >> b;
        A[a].open++;
        A[b].close++;
    }
    int dem = 0;
    for(int i = 1; i <= n; i++)
    {
        dem += A[i].open;
        ds.push_back(dem);
        dem -= A[i].close;
    }
    sort(ds.begin(), ds.end());
    cout << ds[(n / 2)];
    return 0;
}
