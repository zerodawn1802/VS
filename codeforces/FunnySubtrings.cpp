/*
Polycarp came up with a new programming language. There are only two types of statements in it:
"x := s": assign the variable named x the value s (where s is a string). For example, the statement var := hello assigns the variable named var the value hello. Note that s is the value of a string, not the name of a variable. Between the variable name, the := operator and the string contains exactly one space each.
"x = a + b": assign the variable named x the concatenation of values of two variables a and b. For example, if the program consists of three statements a := hello, b := world, c = a + b, then the variable c will contain the string helloworld. It is guaranteed that the program is correct and the variables a and b were previously defined. There is exactly one space between the variable names and the = and + operators.
All variable names and strings only consist of lowercase letters of the English alphabet and do not exceed 5 characters.
The result of the program is the number of occurrences of string haha in the string that was written to the variable in the last statement.
Polycarp was very tired while inventing that language. He asks you to implement it. Your task is — for given program statements calculate the number of occurrences of string haha in the last assigned variable.
Input
    The first line contains an integer t (1≤t≤103). Then t test cases follow.
    The first line of each test case contains a single integer n (1≤n≤50) — the number of statements in the program. All variable names and strings are guaranteed to consist only of lowercase letters of the English alphabet and do not exceed 5 characters.
    This is followed by n lines describing the statements in the format described above. It is guaranteed that the program is correct.
Output
    For each set of input data, output the number of occurrences of the haha substring in the string that was written to the variable in the last statement.
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
struct comp
{
    ll cnt = 0, len = 0;
    string st = "", en = "";
    comp(string s)
    {
        len = s.length();
        cnt = 0;
        for (int i = 0; i + 4 <= len; i++) if (s.substr(i, 4) == "haha") cnt++;
        if (len <= 3) st = en = s;
        else 
        {
            st = s.substr(0, 3);
            en = s.substr(len - 3, 3);
        }
    }
    comp()
    {}
    comp operator+(comp oth)
    {
        if ((len <= 3)and(oth.len <= 3)) return comp(st + oth.st);
        comp res;
        res.cnt = cnt + oth.cnt;
        res.len = len + oth.len;
        string bruh = en + oth.st;
        for (int i = 0; i + 4 <= bruh.length(); i++) if (bruh.substr(i, 4) == "haha") res.cnt++;
        res.st = st;
        int i = 0;
        while(res.st.size() < 3)
        {
            res.st.push_back(oth.st[i]);
            i++;
        }
        res.en = oth.en;
        i = en.size() - 1;
        while(res.en.size() < 3)
        {
            res.en.push_back(en[i]);
            i--;
        }
        return res;
    }
};
vector<int> vec;
ll n, m, i, j, k, t, t1, u, v, a, b;
ll res = 0;
map<string,comp> var;
string sa, sb, sc, sd, se;
int main()
{
	fio;
    cin >> t;
    for (t1 = 0; t1 < t; t1++)
    {
        cin>>n;
        var.clear();
        for (i = 0; i < n; i++)
        {
            cin >> sa >> sb;
            if (sb == ":=")
            {
                cin >> sc;
                var[sa] = comp(sc);
            }
            else
            {
                cin >> sc >> sd >> se;
                var[sa] = var[sc] + var[se];
            }
        }
        cout << var[sa].cnt << endl;
    }
}