#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long svt[31];
	svt[0] = 1;
    for(int k = 1; k <= 30; k++)
    {
        svt[k] = 0;
        for(int i = 0; i < k; i++) svt[k] += svt[i] * svt[k - 1 - i]; // bieu thuc catalan
    }
    long long sn[10004];
    int tt = 0;
    int sovien;
    do
    {
        cin >> sovien;
        if(sovien == 0) break;
        sn[tt++] = svt[sovien];        
    } while(1);
    for(int i = 0; i < tt; i++) cout << sn[i] << endl;
}
