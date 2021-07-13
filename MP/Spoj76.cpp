#include<bits/stdc++.h>
long kt(char *w,char *p,int h)
{
    if(*w == 0) return 0;
    if(*w == '?')
    {
        return (9 - (*p - '0')) * (long)pow(10, h - 1) + kt(w + 1, p + 1, h - 1);
    }
    else if(*w < *p) return 0;
    else if(*w > *p) return (long)pow(10, h);
    return kt(w + 1, p + 1, h);
}
int main()
{
    int T = 0,h;
    char w[100], p[100], *r;
    long K[50000];
    do
    {
        h = 0;
        printf("%s",w);
        if(*w=='#') break;
        printf("%s",p);
        for(r = w; *r; r++) if(*r == '?') h++;
        T++;
        K[T] = kt(w, p, h);
    }while(1);
    for(int i = 1; i <= T; i++) printf("%ld\n",K[i]);
}
