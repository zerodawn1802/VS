#include <bits/stdc++.h>
using namespace std;

int a[100][100];
bool ok[100][100];
int n;
vector <string> res;

n=4
//1 0 0 0
//1 1 0 1
//0 1 0 0 
//0 1 1 1
//
//aij = 1, false, i,j<=n && i,j>=1

void Try(int i,int j,string s)
{
    if(a[1][1]==0 || a[n][n]==0) return;
    if(i==n && j == n)
        res.push_back(s);
    
    //i,j -> i+1,j
    if(a[i+1][j]==1 && i != n && ok[i+1][j] == false)
	{
        ok[i][j]=true;
        Try(i+1,j,s+"D");
        ok[i][j]=false;
    }
    if(a[i][j+1]==1 && j != n && !ok[i][j+1])
	{
        ok[i][j]=true;
        Try(i,j+1,s+"R");
        ok[i][j]=false;
    }
    if(a[i][j-1]==1 && j != 1 && !ok[i][j-1])
	{
        ok[i][j]=true;
        Try(i,j-1,s+"L"); 
        ok[i][j]=false;
    }
    if(a[i-1][j]==1 && i != 1 && !ok[i-1][j])
	{
        ok[i][j]=true;
        Try(i-1,j,s+"U");
        ok[i][j]=false;
    }
}

void Solve()
{
   
    res.clear();
    cin >> n;
    for(int i=1;i<=n;i++)
	{
        for(int j=1;j<=n;j++)
		{
            cin >> a[i][j];
            ok[i][j]=false;
        }
    }
    Try(1,1,"");
    if(res.size()==0) cout << -1;
    else
	{
		sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++)
            cout << res[i]<<" ";
    }
	cout << endl;
}

int main()
{
    int t=1;
    cin >> t;
    while(t--)
		Solve();
    return 0;
}
