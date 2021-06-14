/*
Uh oh! Ray lost his array yet again! However, Omkar might be able to help because he thinks he has found the OmkArray of Ray's array. The OmkArray of an array a with elements a1,a2,…,a2k−1, is the array b with elements b1,b2,…,bk such that bi is equal to the median of a1,a2,…,a2i−1 for all i. Omkar has found an array b of size n (1≤n≤2⋅105, −109≤bi≤109). Given this array b, Ray wants to test Omkar's claim and see if b actually is an OmkArray of some array a. Can you help Ray?
The median of a set of numbers a1,a2,…,a2i−1 is the number ci where c1,c2,…,c2i−1 represents a1,a2,…,a2i−1 sorted in nondecreasing order.
Input
    Each test contains multiple test cases. The first line contains a single integer t (1≤t≤104) — the number of test cases. Description of the test cases follows.
    The first line of each test case contains an integer n (1≤n≤2⋅105) — the length of the array b.
    The second line contains n integers b1,b2,…,bn (−109≤bi≤109) — the elements of b.
    It is guaranteed the sum of n across all test cases does not exceed 2⋅105.
Output
    For each test case, output one line containing YES if there exists an array a such that bi is the median of a1,a2,…,a2i−1 for all i, and NO otherwise. The case of letters in YES and NO do not matter (so yEs and No will also be accepted).
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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ordered_set<int>s;
        bool ans=true;
        int prev=a[0];
        s.insert(a[0]);
        for(int i=1;i<n;i++){
            s.insert(a[i]);
            int x=s.order_of_key(prev);
            int y=s.order_of_key(a[i]);
            if(abs(x-y)>1)ans=false;
            prev=a[i];
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}