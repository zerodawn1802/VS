#include<bits/stdc++.h>
using namespace std;
#define Du 2147483647
int n;
char arr[1003][1003];
void read()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
}
long long F[1003][1003];
int check[1003][1003];
void init()
{
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            F[i][j] = 0;
            check[i][j] = 0;
        }
    }
}
long long count()
{
    F[1][0] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(arr[i][j]=='.') F[i][j] = (F[i-1][j]  +F[i][j-1]) % Du;
        }
    }
    return F[n][n];
}
struct data
{
    int i;
    int j;
};
int x_xq[] = {-1, +0, +1, +0};
int y_xq[] = {+0, +1, +0, -1};
void BFS(int y, int x)
{
    data tmp;
    tmp.i = y;
    tmp.j = x;
    queue <data> q;
    q.push(tmp);
    check[y][x] = 1;
    while(!q.empty())
    {
        data u = q.front();
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            int x_m = u.j+x_xq[i];
            int y_m = u.i+y_xq[i];
            if(x_m >= 1 && x_m <= n && y_m >= 1 && y_m <= n && check[y_m][x_m] == 0 && arr[y_m][x_m] == '.')
            {
                tmp.i = y_m;
                tmp.j = x_m;
                q.push(tmp);
                check[y_m][x_m] = 1;
            }
        }
    }
}
int main()
{
    read();
    init();
    long long x = count();
    if(x != 0) cout << x;
    else
    {
        BFS(1, 1);
        if (check[n][n] == 1) cout << "THE GAME IS A LIE";
        else cout << "INCONCEIVABLE";
    }
    return 0;
}
