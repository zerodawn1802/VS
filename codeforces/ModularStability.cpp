/*
We define xmody as the remainder of division of x by y (% operator in C++ or Java, mod operator in Pascal).

Let's call an array of positive integers [a1,a2,…,ak] stable if for every permutation p of integers from 1 to k, and for every non-negative integer x, the following condition is met:

(((xmoda1)moda2)…modak−1)modak=(((xmodap1)modap2)…modapk−1)modapk
That is, for each non-negative integer x, the value of (((xmoda1)moda2)…modak−1)modak does not change if we reorder the elements of the array a.

For two given integers n and k, calculate the number of stable arrays [a1,a2,…,ak] such that 1≤a1<a2<⋯<ak≤n.

Input
The only line contains two integers n and k (1≤n,k≤5⋅105).

Output
Print one integer — the number of stable arrays [a1,a2,…,ak] such that 1≤a1<a2<⋯<ak≤n. Since the answer may be large, print it modulo 998244353.
*/
#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;
const int mod = 998244353;
int mult(int a, int b) {
    return (1LL * a * b) % mod;
}
int sum(int a, int b) {
    int s = a + b;
    if (s >= mod) s -= mod;
    return s;
}
const int maxN = 5e5 + 10;
const int maxK = 21;
int fact[maxN], invfact[maxN], inv[maxN];
int n, k;
int cnk(int n, int k) {
    return mult(fact[n], mult(invfact[k], invfact[n - k]));
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
//    freopen("input.txt", "r", stdin);
    fact[0] = invfact[0] = fact[1] = invfact[1] = inv[1] = 1;
    for (int i = 2; i < maxN; i++) {
        fact[i] = mult(fact[i - 1], i);
        inv[i] = mult(inv[mod % i], mod - mod / i);
        invfact[i] = mult(invfact[i - 1], inv[i]);
    }
    cin >> n >> k;
    int ans = 0;
    for (int d = 1; d <= n; d++) {
        int lft = n / d - 1;
        if (lft < (k - 1)) continue;
        ans = sum(ans, cnk(lft, k - 1));
    }
    cout << ans;
    return 0;
}