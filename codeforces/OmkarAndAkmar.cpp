/*
Omkar and Akmar are playing a game on a circular board with n (2≤n≤106) cells. The cells are numbered from 1 to n so that for each i (1≤i≤n−1) cell i is adjacent to cell i+1 and cell 1 is adjacent to cell n. Initially, each cell is empty.
Omkar and Akmar take turns placing either an A or a B on the board, with Akmar going first. The letter must be placed on an empty cell. In addition, the letter cannot be placed adjacent to a cell containing the same letter.
A player loses when it is their turn and there are no more valid moves.
Output the number of possible distinct games where both players play optimally modulo 109+7. Note that we only consider games where some player has lost and there are no more valid moves.
Two games are considered distinct if the number of turns is different or for some turn, the letter or cell number that the letter is placed on were different.
A move is considered optimal if the move maximizes the player's chance of winning, assuming the other player plays optimally as well. More formally, if the player who has to move has a winning strategy, they have to make a move after which they will still have a winning strategy. If they do not, they can make any move.
Input
    The only line will contain an integer n (2≤n≤106) — the number of cells on the board.
Output
    Output a single integer — the number of possible distinct games where both players play optimally modulo 109+7.
*/
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define pb push_back
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

const ll MOD = 1000000007;

vll fact;
vll invfact;

ll modpow(ll b, ll e) {
	ll ans = 1;
	for (; e; b = b * b % MOD, e /= 2)
		if (e & 1) ans = ans * b % MOD;
	return ans;
}

ll comb(ll a,ll b){
    if (b < 0 || b > a){
        return 0;
    }
    ll den = (invfact[b] * invfact[a-b]) % MOD;
    return (fact[a] * den) % MOD;
}

int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);
	
	int MAX = 1000005;
	
	fact.pb(1);
	for(int i = 1; i < MAX; i++){
	    fact.pb((i * fact[i-1]) % MOD);
	}
	
	invfact.pb(modpow(fact[MAX-1], MOD-2));
	for (int i = MAX - 1; i > 0; i--){
	    invfact.pb((i * invfact.back()) % MOD);
	}
	
	reverse(invfact.begin(), invfact.end());
	
	int n;
	cin >> n;
	
	ll out = 0;
	for(int i = 2; i <= n; i += 2){
	    ll p1 = (2 * n * fact[i - 1]) % MOD;
	    ll p2 = comb(i, n - i);
	    out += (p1 * p2) % MOD;
	    out %= MOD;
	}
	
	cout << out;
}