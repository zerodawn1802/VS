#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ull unsigned long long
using namespace std;

int n, s, x;
vector <int> L;

void xl(){
	cin >> s >> n; s++;
	L.clear();
	L.resize(s,0);
	L[0] = 1;
	fori(i,0,n)
	{
		cin >> x;
		forr(j,s, 0)
		{
			if(L[j] == 0 && L [j - x] == 1) L[j] = 1;
		}
	}
	forr(i,s,0){
		if(L[i]){
			cout << i;
			return;
		}
	}
}

int main(){
	fastIO();
	int T; 
	T = 1;
	//cin >> T;
	while (T -- ){
		xl();
		cout << "\n";
	}
}
