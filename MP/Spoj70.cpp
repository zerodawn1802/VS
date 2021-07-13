#include <bits/stdc++.h>
using namespace std;
char in[5][5];
void read ()
{
    for (int i=1; i<=4; i++)
    {
        for (int j=1; j<=4; j++)
        cin>>in[i][j];
    }
}

int arr[25];
int xu[5][5];
int dd()
{
    int k=1;
    int count = 0;
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            xu[i][j] = arr[k];
            if(arr[k] == 1) count++;
            k++;
        }
    }
    return count;
}
char rs[5][5];
int x_xq[] = {+1, +0, -1, +0};
int y_xq[] = {+0, -1, +0, +1};
void latxu()
{
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 4; j++) rs[i][j] = in[i][j];
    }
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            if(xu[i][j] == 1)
            {
                if(rs[i][j] == 'b') rs[i][j] = 'w';
                else rs[i][j] = 'b';
                for(int k = 0; k < 4; k++)
                {
                    int X = j + x_xq[k];
                    int Y = i + y_xq[k];
                    if(X >= 1 && X <= 4 && Y >= 1 && Y <= 4)
                    {
                        if(rs[Y][X] == 'b') rs[Y][X] = 'w';
                        else rs[Y][X] = 'b';
                    }
                }
            }
        }
    }
}

int check ()
{
    char it = rs[1][1];
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            if(rs[i][j] != it) return 0;
        }
    }
    return 1;
}
char tt[5][5];
int t2[5][5];

int A = 25;
void sinhNP (int u)
{
    if (u>16)
    {
        int x = dd();
        latxu ();
        if (check()==1) A = min (A, x);
    }
    else
    {
        arr[u] = 0;
        sinhNP(u + 1);
        arr[u] = 1;
        sinhNP(u + 1); 
    }
}

int main ()
{
    read();
    sinhNP(1);
    if (A != 25) cout << A;
    else cout << "Impossible";
    return 0;
}
