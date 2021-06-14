/*
The tycoon of a winery empire in Mondstadt, unmatched in every possible way. A thinker in the Knights of Favonius with an exotic appearance.
This time, the brothers are dealing with a strange piece of wood marked with their names. This plank of wood can be represented as a string of n characters. Each character is either a 'D' or a 'K'. You want to make some number of cuts (possibly 0) on this string, partitioning it into several contiguous pieces, each with length at least 1. Both brothers act with dignity, so they want to split the wood as evenly as possible. They want to know the maximum number of pieces you can split the wood into such that the ratios of the number of occurrences of 'D' to the number of occurrences of 'K' in each chunk are the same.
Kaeya, the curious thinker, is interested in the solution for multiple scenarios. He wants to know the answer for every prefix of the given string. Help him to solve this problem!
For a string we define a ratio as a:b where 'D' appears in it a times, and 'K' appears b times. Note that a or b can equal 0, but not both. Ratios a:b and c:d are considered equal if and only if a⋅d=b⋅c.
For example, for the string 'DDD' the ratio will be 3:0, for 'DKD' — 2:1, for 'DKK' — 1:2, and for 'KKKKDD' — 2:4. Note that the ratios of the latter two strings are equal to each other, but they are not equal to the ratios of the first two strings.
Input
    Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤1000). Description of the test cases follows.
    The first line of each test case contains an integer n (1≤n≤5⋅105) — the length of the wood.
    The second line of each test case contains a string s of length n. Every character of s will be either 'D' or 'K'.
    It is guaranteed that the sum of n over all test cases does not exceed 5⋅105.
Output
    For each test case, output n space separated integers. The i-th of these numbers should equal the answer for the prefix s1,s2,…,si.
*/
#include <string>
#include <bits/functexcept.h>
#include <iosfwd>
#include <bits/cxxabi_forced.h>
#include <bits/functional_hash.h>
 
#pragma push_macro("__SIZEOF_LONG__")
#pragma push_macro("__cplusplus")
#define __SIZEOF_LONG__ __SIZEOF_LONG_LONG__
#define unsigned unsigned long
#define __cplusplus 201102L
 
#define __builtin_popcountl __builtin_popcountll
#define __builtin_ctzl __builtin_ctzll
 
#include <bitset>
 
#pragma pop_macro("__cplusplus")
#pragma pop_macro("__SIZEOF_LONG__")
#undef unsigned
#undef __builtin_popcountl
#undef __builtin_ctzl
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define mod 1000000007
#define fi first
#define se second
#define int long long
#define pii pair<int,int>
#define endl '\n'
#define pll pair<long long,long long>
#define LONGLONG_MAX 100000000000000
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
long long power(long long a,long long b){
    long long ans=1;
    while(b>0){
        if(b&1){ans=(ans*a)%mod;}
                a=(a*a)%mod;
                b>>=1;
        }
    return ans; 
}
 
 
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<pii,int>m;
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(s[i]=='D')x++;
            else y++;
            int z=__gcd(x,y);
            int x1=x/z;
            int y1=y/z;
            m[{x1,y1}]++;
            cout<<m[{x1,y1}]<<" ";
        }
        cout<<endl;
 
    }
    return 0;
}