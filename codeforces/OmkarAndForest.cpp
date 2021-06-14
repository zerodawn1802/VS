/*
Omkar's most recent follower, Ajit, has entered the Holy Forest. Ajit realizes that Omkar's forest is an n by m grid (1≤n,m≤2000) of some non-negative integers. Since the forest is blessed by Omkar, it satisfies some special conditions:
For any two adjacent (sharing a side) cells, the absolute value of the difference of numbers in them is at most 1.
If the number in some cell is strictly larger than 0, it should be strictly greater than the number in at least one of the cells adjacent to it.
Unfortunately, Ajit is not fully worthy of Omkar's powers yet. He sees each cell as a "0" or a "#". If a cell is labeled as "0", then the number in it must equal 0. Otherwise, the number in it can be any nonnegative integer.
Determine how many different assignments of elements exist such that these special conditions are satisfied. Two assignments are considered different if there exists at least one cell such that the numbers written in it in these assignments are different. Since the answer may be enormous, find the answer modulo 109+7.
Input
    Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤100). Description of the test cases follows.
    The first line of each test case contains two integers n and m (1≤n,m≤2000,nm≥2) – the dimensions of the forest.
    n lines follow, each consisting of one string of m characters. Each of these characters is either a "0" or a "#".
    It is guaranteed that the sum of n over all test cases does not exceed 2000 and the sum of m over all test cases does not exceed 2000.
Output
    For each test case, print one integer: the number of valid configurations modulo 109+7.
*/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
const ll mod = 1e9+7;
 
ll fpow(ll b, ll p){
  ll r = 1;
  for(; p; b=(b*b)%mod, p>>=1) if(p&1) r=(r*b)%mod;
  return r;
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while(t--){
    int n, m; cin >> n >> m;
    vector<vector<char>> b(n, vector<char>(m));
    int c = 0;
    for(auto&i:b)for(auto&j:i)cin>>j, c+=(j=='#');
    cout<<(fpow(2,c)-(c==n*m)+mod)%mod<<"\n";
  }
}
