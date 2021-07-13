#include <bits/stdc++.h>
using namespace std;
typedef struct vt
{
    long long sa = 0, sb = 0, sum = 0;
};
vector<vt> f(93);
long long a = 0, b = 0;
void taofibo()
{
    f[0].sa = 1; f[0].sb = 0; f[0].sum = 1;
    f[1].sa = 0; f[1].sb = 1; f[1].sum = 1;
    for(int i = 2; i <= 92; i++)
    {
        f[i].sa = f[i - 1].sa + f[i - 2].sa;
        f[i].sb = f[i - 1].sb + f[i - 2].sb;
        f[i].sum = f[i - 1].sum + f[i - 2].sum;
    }
}
void process(int n, long long vt)
{
    if(vt == f[n].sum)
    {
        a += f[n].sa;
        b += f[n].sb;
        return;
    }
    if(vt > f[n - 2].sum)
    {
        a += f[n - 2].sa;
        b += f[n - 2].sb;
        process(n - 1, vt - f[n - 2].sum);
    }
    else process(n - 2, vt);
}
int main()
{
    int t;
	taofibo();
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        long long k;
        a = 0; b = 0;
        cin >> n >> k;
        process(n, k);
        cout << a << " " << b << endl;
    }
    return 0;
}
