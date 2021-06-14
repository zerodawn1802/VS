/*
You are given an array a of n integers. Find the number of pairs (i,j) (1≤i<j≤n) where the sum of ai+aj is greater than or equal to l and less than or equal to r (that is, l≤ai+aj≤r).
For example, if n=3, a=[5,1,2], l=4 and r=7, then two pairs are suitable:
    i=1 and j=2 (4≤5+1≤7);
    i=1 and j=3 (4≤5+2≤7).
Input
    The first line contains an integer t (1≤t≤104). Then t test cases follow.
    The first line of each test case contains three integers n,l,r (1≤n≤2⋅105, 1≤l≤r≤109) — the length of the array and the limits on the sum in the pair.
    The second line contains n integers a1,a2,…,an (1≤ai≤109).
    It is guaranteed that the sum of n overall test cases does not exceed 2⋅105.
Output
    For each test case, output a single integer — the number of index pairs (i,j) (i<j), such that l≤ai+aj≤r.
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set(el) tree<el,null_type,less<el>,rb_tree_tag,tree_order_statistics_node_update>
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast,unroll-loops,tree-vectorize")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#define FILE_IN "cseq.inp"
#define FILE_OUT "cseq.out"
#define ofile freopen(FILE_IN,"r",stdin);freopen(FILE_OUT,"w",stdout)
#define fio ios::sync_with_stdio(0);cin.tie(0)
#define nfio cin.tie(0)
#define endl "\n"
#define ord(a,b,c) ((a>=b)and(b>=c))
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
template<typename T>
__attribute__((always_inline)) void chkmin(T& a, const T& b) {
    a=(a<b)?a:b;
}
template<typename T>
__attribute__((always_inline)) void chkmax(T& a, const T& b) {
    a=(a>b)?a:b;
}
#define MOD (ll(998244353))
#define MAX 300001
#define mag 320
const long double PI=3.14159265358979;
#define p1 first
#define p2 second.first
#define p3 second.second
#define fi first
#define se second
#define pii(element_type) pair<element_type,element_type>
#define piii(element_type) pair<element_type,pii(element_type)>
#define pow2(x) (ll(1)<<x)
#define ff(i,__,___) for(int i=__;i<=___;i++)
#define rr(i,__,___) for(int i=__;i>=___;i--)
#define bi BigInt
typedef long long ll;
typedef long double ld;
typedef short sh;
ll BOW(ll a, ll x, ll p)
{
	if (!x) return 1;
	ll res = BOW(a, x / 2, p);
	res *= res;
	res %= p;
	if (x % 2) res *= a;
	return res % p;
}
ll INV(ll a, ll p)
{
	return BOW(a, p - 2, p);
}
ll n, m, i, j, k, t, t1, u, v, a, b, l, r;
ll arr[200001];
int main()
{
	fio;
    cin >> t;
    for (t1 = 0; t1 < t; t1++)
    {
        cin >> n >> l >> r;
        for (i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr + n);
        b = 0;
        for (i = 0; i < n; i++)
        {
            u = lower_bound(arr, arr + n, l - arr[i]) - arr;
            u = max(u, i + 1);
            v = upper_bound(arr, arr + n, r - arr[i]) - arr;
            if (v - u >= 0) b += v - u;
        }
        cout << b << endl;
    }
}
