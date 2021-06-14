/*
Alice and Bob are playing yet another card game. This time the rules are the following. There are n cards lying in a row in front of them. The i-th card has value ai.

First, Alice chooses a non-empty consecutive segment of cards [l;r] (l≤r). After that Bob removes a single card j from that segment (l≤j≤r). The score of the game is the total value of the remaining cards on the segment (al+al+1+⋯+aj−1+aj+1+⋯+ar−1+ar). In particular, if Alice chooses a segment with just one element, then the score after Bob removes the only card is 0.

Alice wants to make the score as big as possible. Bob takes such a card that the score is as small as possible.

What segment should Alice choose so that the score is maximum possible? Output the maximum score.

Input
The first line contains a single integer n (1≤n≤105) — the number of cards.

The second line contains n integers a1,a2,…,an (−30≤ai≤30) — the values on the cards.

Output
Print a single integer — the final score of the game.
*/
#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long ll;
const int maxN = 1e5 + 10;
int a[maxN];
int n;
int pref[maxN];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
//    freopen("input.txt", "r", stdin);
    cin >> n;
    int best = 0;
    vector < pair < int, int > > all;
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
        for (auto& it : all) {
            it.first = max(it.first, a[i]);
        }
        all.emplace_back(a[i], pref[i - 1]);
        sort(all.begin(), all.end());
        map < int, int > mp;
        for (auto& it : all) {
            if (!mp.count(it.first)) mp[it.first] = it.second;
            else mp[it.first] = min(mp[it.first], it.second);
        }
        all.clear();
        for (auto& it : mp) {
            all.emplace_back(it);
            best = max(best, pref[i] - it.second - it.first);
        }
    }
    cout << best;
    return 0;
}
