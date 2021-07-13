#include <bits/stdc++.h>
using namespace std;

void process ()
{
	int n;	cin >> n;
	long long a[n+3]={0};
	int left [n+3]={0};
	int right [n+3]={0};
	for (int i=1; i<=n; i++)
	{
		cin >> a[i];
	}
	// Left
	stack <int> SL;
	SL.push (0);
	for (int i=1; i<=n; i++)
	{
		while (!SL.empty() && a[SL.top()] >= a[i])
		{
			SL.pop();
		}
		if (!SL.empty())	left[i]=SL.top();
		SL.push(i);
	}
	// Right
	stack <int> SR;
	SR.push(n+1);
	for (int i=n; i>=1; i--)
	{
		while (!SR.empty() && a[SR.top()] >= a[i])
		{
			SR.pop();
		}
		if (!SR.empty())	
		{
			right[i]=SR.top();
		}
		SR.push(i);
	}
	for (int i=1; i<=n; i++)
	{
		cout << left[i] << " ";
	}
	cout << endl;
	for (int i=1; i<=n; i++)
	{
		cout << right[i] << " ";
	}
	cout << endl;
	long long ans=0;
	for (int i=1; i<=n; i++)
	{
//		cout << right[i]-left[i]-1 << " ";
		if (right[i]-left[i]-1 >=a[i])	ans=max(ans,a[i]);
	}
	cout << ans;
}
int main ()
{
	process ();

 	return 0;
 
}
