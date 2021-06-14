/*
Omkar has received a message from Anton saying "Your story for problem A is confusing. Just make a formal statement." Because of this, Omkar gives you an array a=[a1,a2,…,an] of n distinct integers. An array b=[b1,b2,…,bk] is called nice if for any two distinct elements bi,bj of b, |bi−bj| appears in b at least once. In addition, all elements in b must be distinct. Can you add several (maybe, 0) integers to a to create a nice array b of size at most 300? If a is already nice, you don't have to add any elements.
For example, array [3,6,9] is nice, as |6−3|=|9−6|=3, which appears in the array, and |9−3|=6, which appears in the array, while array [4,2,0,6,9] is not nice, as |9−4|=5 is not present in the array.
For integers x and y, |x−y|=x−y if x>y and |x−y|=y−x otherwise.
Input
    Each test contains multiple test cases. The first line contains t (1≤t≤50), the number of test cases. Description of the test cases follows.
    The first line of each test case contains a single integer n (2≤n≤100) — the length of the array a.
    The second line of each test case contains n distinct integers a1,a2,⋯,an (−100≤ai≤100) — the elements of the array a.
Output
    For each test case, output one line containing YES if Omkar can create a nice array b by adding elements to a and NO otherwise. The case of each letter does not matter, so yEs and nO will also be accepted.
    If the first line is YES, output a second line containing a single integer k (n≤k≤300).
    Then output one line containing k distinct integers b1,b2,⋯,bk (−109≤bi≤109), the elements of the nice array b. b1,b2,⋯,bk can be in any order. For each ai in a, ai must appear at least once in b.
    It can be proved that if Omkar can create such an array b, then he can also do so in a way that satisfies the above constraints.
    If multiple solutions exist, you can print any.
*/
#include<bits/stdc++.h>
using namespace std;
#define N 1000005
#define pb push_back
#define ll long long
#define pn cout<<"NO\n"
#define py cout<<"YES\n" 
int T,i,j,n,k,fl,a[N],mx,x,y,v;
int main(){
	ios::sync_with_stdio(false);
	cin>>T;
	while(T--){
		fl=0;
		cin>>n;for(i=1;i<=n;++i)cin>>a[i],fl|=(a[i]<0);
		if(fl)pn;
		else{
			py;mx=0;
			for(i=1;i<=n;++i)mx=max(mx,a[i]);
			cout<<mx+1<<"\n";
			for(i=0;i<=mx;++i)cout<<i<<" ";
			cout<<"\n";
		}
	}
}