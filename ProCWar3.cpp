#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[20], dd, res;
    char t[20];
    gets(t);
    dd = strlen(t);
    for(int i = 0; i < dd; i++)
    {
        if(t[i] == 'I') a[i] = 1;
        else if(t[i] == 'V') a[i] = 5;
        else if(t[i] == 'X') a[i] = 10;
        else if(t[i] == 'L') a[i] = 50;
        else if(t[i] == 'C') a[i] = 100;
        else if(t[i] == 'D') a[i] = 500;
        else if(t[i] == 'M') a[i] = 1000;
    }
    res = a[dd-1];
    for(int i = dd-1; i > 0; i--)
    {
        if(a[i] > a[i-1]) res = res - a[i-1];
        else if(a[i] == a[i-1] || a[i] < a[i-1]) res = res + a[i-1];
    }
    cout << res;
}
