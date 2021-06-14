/*
There are two infinite sources of water:

hot water of temperature h;
cold water of temperature c (c<h).
You perform the following procedure of alternating moves:

take one cup of the hot water and pour it into an infinitely deep barrel;
take one cup of the cold water and pour it into an infinitely deep barrel;
take one cup of the hot water …
and so on …
Note that you always start with the cup of hot water.

The barrel is initially empty. You have to pour at least one cup into the barrel. The water temperature in the barrel is an average of the temperatures of the poured cups.

You want to achieve a temperature as close as possible to t. So if the temperature in the barrel is tb, then the absolute difference of tb and t (|tb−t|) should be as small as possible.

How many cups should you pour into the barrel, so that the temperature in it is as close as possible to t? If there are multiple answers with the minimum absolute difference, then print the smallest of them.

Input
The first line contains a single integer T (1≤T≤3⋅104) — the number of testcases.

Each of the next T lines contains three integers h, c and t (1≤c<h≤106; c≤t≤h) — the temperature of the hot water, the temperature of the cold water and the desired temperature in the barrel.

Output
For each testcase print a single positive integer — the minimum number of cups required to be poured into the barrel to achieve the closest temperature to t.
*/
#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;
const int maxN = 1005;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
//    freopen("input.txt", "r", stdin);
    int tst;
    cin >> tst;
    while (tst--) {
        ll h, c, t;
        cin >> h >> c >> t;
        if (2 * t <= h + c) {
            cout << 2 << '\n';
            continue;
        }
        else {
            ll D = 2 * t - h - c;
            ll alpha = (t - c) / D + 1;
            ll best = alpha;
            for (ll c1 = alpha - 4; c1 <= alpha + 4; c1++) {
                if (c1 <= 0) continue;
                ll valQ = 2 * c1 - 1;
                ll valP = abs(c1 * h + (c1 - 1) * c - t * valQ);
                ll valY = 2 * best - 1;
                ll valX = abs(best * h + (best - 1) * c - t * valY);
                ll D1 = valP * valY;
                ll D2 = valQ * valX;
                if (make_pair(D1, c1) < make_pair(D2, best)) {
                    best = c1;
                }
            }
            ll valY = 2 * best - 1;
            ll valX = abs(best * h + (best - 1) * c - t * valY);
            ll valQ = 2;
            ll valP = abs((h + c - 2 * t));
            ll D1 = valP * valY;
            ll D2 = valQ * valX;
            ll T = 2;
            if (make_pair(D1, T) < make_pair(D2, best)) {
                cout << T << '\n';
            }
            else {
                cout << 2 * best - 1 << '\n';
            }
        }
    }
    return 0;
}