/*
You are given two integers a and b. In one turn, you can do one of the following operations:
Take an integer c (c>1 and a should be divisible by c) and replace a with ac;
Take an integer c (c>1 and b should be divisible by c) and replace b with bc.
Your goal is to make a equal to b using exactly k turns.
For example, the numbers a=36 and b=48 can be made equal in 4 moves:
    c=6, divide b by c ⇒ a=36, b=8;
    c=2, divide a by c ⇒ a=18, b=8;
    c=9, divide a by c ⇒ a=2, b=8;
    c=4, divide b by c ⇒ a=2, b=2.
For the given numbers a and b, determine whether it is possible to make them equal using exactly k turns.
Input
    The first line contains one integer t (1≤t≤104). Then t test cases follow.
    Each test case is contains three integers a, b and k (1≤a,b,k≤109).
Output
    For each test case output:
        "Yes", if it is possible to make the numbers a and b equal in exactly k turns;
        "No" otherwise.
    The strings "Yes" and "No" can be output in any case.
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
 
//Fast I/O.
#define fio ios::sync_with_stdio(0);cin.tie(0)
#define nfio cin.tie(0)
#define endl "\n"
 
//Order checking.
#define ord(a,b,c) ((a>=b)and(b>=c))
 
//min/max redefines, so i dont have to resolve annoying compile errors.
#define min(a,b) (((a)<(b))?(a):(b))
#define max(a,b) (((a)>(b))?(a):(b))
 
// Fast min/max assigns to use with AVX.
// Requires g++ 9.2.0.
template<typename T>
__attribute__((always_inline)) void chkmin(T& a, const T& b) {
    a=(a<b)?a:b;
}
 
template<typename T>
__attribute__((always_inline)) void chkmax(T& a, const T& b) {
    a=(a>b)?a:b;
}
 
//Constants.
#define MOD (ll(998244353))
#define MAX 300001
#define mag 320
const long double PI=3.14159265358979;
 
//Pairs and 3-pairs.
#define p1 first
#define p2 second.first
#define p3 second.second
#define fi first
#define se second
#define pii(element_type) pair<element_type,element_type>
#define piii(element_type) pair<element_type,pii(element_type)>
 
//Quick power of 2.
#define pow2(x) (ll(1)<<x)
 
//Short for-loops.
#define ff(i,__,___) for(int i=__;i<=___;i++)
#define rr(i,__,___) for(int i=__;i>=___;i--)
 
//Typedefs.
#define bi BigInt
typedef long long ll;
typedef long double ld;
typedef short sh;
 
// Binpow and stuff
ll BOW(ll a, ll x, ll p)
{
	if (!x) return 1;
	ll res=BOW(a,x/2,p);
	res*=res;
	res%=p;
	if (x%2) res*=a;
	return res%p;
}
ll INV(ll a, ll p)
{
	return BOW(a,p-2,p);
}
//---------END-------//
#endif
vector<int> vec;
int cnt(int x)
{
    int res=0,i;
    for (i=2;i*i<=x;i++)
    {
        while(x%i==0)
        {
            x/=i;
            res++;
        }
    }
    if (x>1) res++;
    return res;
}
int n,m,i,j,k,t,t1,u,v,a,b;
int main()
{
	fio;
    cin>>t;
    for (t1=0;t1<t;t1++)
    {
        cin>>a>>b>>k;
        u=cnt(a);
        v=cnt(b);
        if (k>u+v)
        {
            cout<<"No\n";
        }
        else
        {
            if (k>1)
            {
                cout<<"Yes\n";
            }
            else
            {
                if (((a%b==0)or(b%a==0))and(a-b))
                {
                    cout<<"Yes\n";
                }
                else
                {
                    cout<<"No\n";
                }
            }
        }
    }
}