/*
You might have remembered Theatre square from the problem 1A. Now it's finally getting repaved.

The square still has a rectangular shape of n×m meters. However, the picture is about to get more complicated now. Let ai,j be the j-th square in the i-th row of the pavement.

You are given the picture of the squares:

if ai,j= "*", then the j-th square in the i-th row should be black;
if ai,j= ".", then the j-th square in the i-th row should be white.
The black squares are paved already. You have to pave the white squares. There are two options for pavement tiles:

1×1 tiles — each tile costs x burles and covers exactly 1 square;
1×2 tiles — each tile costs y burles and covers exactly 2 adjacent squares of the same row. Note that you are not allowed to rotate these tiles or cut them into 1×1 tiles.
You should cover all the white squares, no two tiles should overlap and no black squares should be covered by tiles.

What is the smallest total price of the tiles needed to cover all the white squares?

Input
The first line contains a single integer t (1≤t≤500) — the number of testcases. Then the description of t testcases follow.

The first line of each testcase contains four integers n, m, x and y (1≤n≤100; 1≤m≤1000; 1≤x,y≤1000) — the size of the Theatre square, the price of the 1×1 tile and the price of the 1×2 tile.

Each of the next n lines contains m characters. The j-th character in the i-th line is ai,j. If ai,j= "*", then the j-th square in the i-th row should be black, and if ai,j= ".", then the j-th square in the i-th row should be white.

It's guaranteed that the sum of n×m over all testcases doesn't exceed 105.

Output
For each testcase print a single integer — the smallest total price of the tiles needed to cover all the white squares in burles.
*/
#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;
const int maxN = 1005;
char c[maxN][maxN];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tst;
    cin >> tst;
    while (tst--) {
        int n, m;
        cin >> n >> m;
        int x, y;
        cin >> x >> y;
        y = min(y, 2 * x);
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> c[i][j];
                if (c[i][j] == '.') {
                    if (j != 1 && c[i][j - 1] == '.' && c[i][j] == '.') {
                        c[i][j] = '*';
                        c[i][j - 1] = '*';
                        ans += y;
                    }
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (c[i][j] == '.') ans += x;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}