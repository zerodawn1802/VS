#include <iostream>
using namespace std;

void inputMatrix(int a[100][100], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void delRow(int a[100][100], int &m, int n, int location)
{
    for(int i = location; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a[i][j] = a[i + 1][j];
        }
    }
    m--;
}

void delCol(int a[100][100], int m, int &n, int location)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = location; j < n; j++)
        {
            a[i][j] = a[i][j + 1];
        }
    }
    n--;
}

void outputMatrix(int a[100][100], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int a[100][100];
    int m, n;
    cin >> m >> n;
    inputMatrix(a,m,n);
    int b[10];
    for(int i = 0; i < m; i++)
    {
        b[i] = 0;
        for(int j = 0; j < n; j++)
        {
            b[i] += a[i][j];
        }
    }
    int max = b[0] / 2;
    int x  = 0;
    for(int i = 0; i < m; i++)
    {
        if(b[i] >= max)
        {
            max = b[i];
            x = i;
        }
    }
    for(int i = 0; i < m; i++)
    {
        b[i] = a[x][i]; 
    }
    delRow(a, m, n, x);
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            b[j] += a[i][j]; 
        }
    }
    max = b[0] / 2;
    for(int i = 0; i < n; i++)
    {
        if(b[i] >= max)
        {
            max = b[i];
            x = i;
        }
    }
    delCol(a, m, n, x);
    outputMatrix(a, m, n);
}
