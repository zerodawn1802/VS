#include <bits/stdc++.h>
	#define ll long long
    #define Begin() int N; cin>>N; cin.ignore(); while(N--)
	//Commands
	
		// Loops
		
		#define FOR(i,a,b) for (int i=a; i<=b; i++)
		#define FOR2(i,a,b) for (ll i=a; i<=b; ++i)
		#define FORD(i,a,b) for (int i=a; i>=b; i--)
		#define FORA(x,C) for (auto x:C)
		#define WHILE(x,y) while(cin>>x>>y)
		#define WHILEF(x,y,f) while(f>>x>>y)
		#define WHILE2(x) while(cin>>x)
		#define WHILEGL(a) while(getline(cin,a))
		#define WHILEGLF(a,f) while(getline(f,a))
		
using namespace std;

ll power(ll a, ll b)
{
	if (b == 0) return 1;
	if (b == 1) return a;
	ll x = power(a, b / 2);
	return (b & 1) ?  x * x * a : x * x;
}	

void Solution(ll a, ll c)
{
	ll cash = 0;
	ll total = 1;
	while (c-- && a)
	{
		if (a % 10 == 1 || a % 10 == 2 || a % 10 == 3 || a % 10 == 5)
		{
			cash++;
			// cout << "qeqwe" << endl;
		}
		else if (a % 10 == 4 || a % 10 == 6)
		{
			cash += 2;
			total *= 2;
		}
		else if (a % 10 == 7)
		{
			cash += 2;
		}
		else if (a % 10 == 8)
		{
			cash += 2;
		}
		else if (a % 10 == 9)
		{
			cash += 3;
			total *= 3;
		}
		a /= 10;
	}
	if (a)
	{
		ll x = a;
		cash += x / 5;
		ll x1 = x % 5;
		if (x1 == 4) cash += 2;
		else if (x1 == 0) cash += 0;
		else cash++;
		if (x1 == 1 && x > 1 || x == 4) total *= 2;
		if (x1 == 4 && x > 4) total *= 3;
	}
	cout << cash << ' ' << total << endl;
}

void Proceed(ll a, ll c)
{
	if (a % 1000)
	{
		cout << 0 << endl;
		return;
	}
	a /= 1000;
	Solution(a, c);
}

int main()
{
	Begin()
	{
		ll a;
		cin >> a;
		ll c;
		cin >> c;
		Proceed(a, c);
	}
}