#include <bits/stdc++.h>
using namespace std;
struct data
{
    long long leng;
    long long Sd;
    long long Sg;
    long long Sc;
};
struct data S[200];
void khoitao()
{
    S[0].leng = 3;
    S[0].Sd = 0;
    S[0].Sg = 3;
    S[0].Sc = 3;
}
char Dequy(long long n, int cs)
{
    if(1 <= n && n <= S[cs].Sd) return Dequy (n, cs - 1);
    else if(S[cs].Sd < n && n <= S[cs].Sg)
    {
        n = n - S[cs].Sd;
        if(n == 1) return 'm';
        else return 'o';
    }
    else if(S[cs].Sg < n && n <= S[cs].Sc)
    {
        n = n - S[cs].Sg;
        return Dequy(n, cs - 1);
    }
}
int main()
{
    khoitao();
    int i = 0;
    long long N;
    cin >> N;
    while(1)
    {
        if (S[i].leng >= N) break;
        i++;
        S[i].Sd = 0 + S[i-1].leng;
        S[i].Sg = S[i].Sd + 1 + i + 2;
        S[i].Sc = S[i].Sg + S[i-1].leng;
        S[i].leng = S[i].Sc;
    }
    cout << Dequy(N, i);
    return 0;
}
