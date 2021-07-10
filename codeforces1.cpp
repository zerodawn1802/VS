//Shortest Path with Obstacle
/*
There are three cells on an infinite 2-dimensional grid, labeled A, B, and F. Find the length of the shortest path from A to B if:

in one move you can go to any of the four adjacent cells sharing a side;
visiting the cell F is forbidden (it is an obstacle).
Input
The first line contains an integer t (1≤t≤104) — the number of test cases in the input. Then t test cases follow. Before each test case, there is an empty line.

Each test case contains three lines. The first one contains two integers xA,yA (1≤xA,yA≤1000) — coordinates of the start cell A. The second one contains two integers xB,yB (1≤xB,yB≤1000) — coordinates of the finish cell B. The third one contains two integers xF,yF (1≤xF,yF≤1000) — coordinates of the forbidden cell F. All cells are distinct.

Coordinate x corresponds to the column number and coordinate y corresponds to the row number (see the pictures below).

Output
Output t lines. The i-th line should contain the answer for the i-th test case: the length of the shortest path from the cell A to the cell B if the cell F is not allowed to be visited.
*/
#include <bits/stdc++.h>
using namespace std;
void process()
{
    int x1, y1, x2, y2, xf, yf;
    cin >> x1 >> y1 >> x2 >> y2 >> xf >> yf;
    if(x1 == x2 && x1 != xf) cout << fabs(y2 - y1) << endl;
    else if(y1 == y2 && y1 != yf) cout << fabs(x1 - x2) << endl;
    else if(x1 == x2 && x1 == xf && yf > min(y1, y2) && yf < max(y1, y2)) cout << fabs(y2 - y1) + 2 << endl;
    else if(y1 == y2 && y1 == yf && xf > min(x1, x2) && xf < max(x1, x2)) cout << fabs(x2 - x1) + 2 << endl;
    else cout << fabs(y2 - y1) + fabs(x2 - x1) << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        process();
    }
}