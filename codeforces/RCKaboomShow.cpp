/*
You know, it's hard to conduct a show with lots of participants and spectators at the same place nowadays. Still, you are not giving up on your dream to make a car crash showcase! You decided to replace the real cars with remote controlled ones, call the event "Remote Control Kaboom Show" and stream everything online.

For the preparation you arranged an arena — an infinite 2D-field. You also bought n remote controlled cars and set them up on the arena. Unfortunately, the cars you bought can only go forward without turning left, right or around. So you additionally put the cars in the direction you want them to go.

To be formal, for each car i (1≤i≤n) you chose its initial position (xi,yi) and a direction vector (dxi,dyi). Moreover, each car has a constant speed si units per second. So after car i is launched, it stars moving from (xi,yi) in the direction (dxi,dyi) with constant speed si.

The goal of the show is to create a car collision as fast as possible! You noted that launching every car at the beginning of the show often fails to produce any collisions at all. Thus, you plan to launch the i-th car at some moment ti. You haven't chosen ti, that's yet to be decided. Note that it's not necessary for ti to be integer and ti is allowed to be equal to tj for any i,j.

The show starts at time 0. The show ends when two cars i and j (i≠j) collide (i. e. come to the same coordinate at the same time). The duration of the show is the time between the start and the end.

What's the fastest crash you can arrange by choosing all ti? If it's possible to arrange a crash then print the shortest possible duration of the show. Otherwise, report that it's impossible.

Input
The first line contains a single integer n (1≤n≤25000) — the number of cars.

Each of the next n lines contains five integers xi, yi, dxi, dyi, si (−103≤xi,yi≤103; 1≤|dxi|≤103; 1≤|dyi|≤103; 1≤si≤103) — the initial position of the i-th car, its direction vector and its speed, respectively.

It's guaranteed that all cars start at distinct positions (i. e. (xi,yi)≠(xj,yj) for i≠j).

Output
Print the shortest possible duration of the show if it's possible to arrange a crash by choosing all ti. Otherwise, print "No show :(".

Your answer is considered correct if its absolute or relative error does not exceed 10−6.

Formally, let your answer be a, and the jury's answer be b. Your answer is accepted if and only if |a−b|max(1,|b|)≤10−6.
*/
#include <bits/stdc++.h>

using namespace std;

double time(int x1, int y1,  int dx1, int dy1, double s1, int x2, int y2, int dx2, int dy2, double s2) {
    const int det = (dx2 * dy1 - dy2 * dx1);
    if (det != 0) {
        double t2 = ((x1 * dy1 - y1 * dx1) - (x2 * dy1 - y2 * dx1)) / (det * s2);
        double t1 = -((x2 * dy2 - y2 * dx2) - (x1 * dy2 - y1 * dx2)) / (det * s1);
        if (min(t1, t2) < 0)
            return -1;
        else
            return max(t1, t2);
    } else {
        if ((x2 - x1) * dy1  - (y2 - y1) * dx1 != 0)
            return -1;
        else {
            double q1 = (x1 * dx1 + y1 * dy1);
            double q2 = (x2 * dx1 + y2 * dy1);
            double v1 = (dx1 * dx1 + dy1 * dy1) * s1;
            double v2 = (dx2 * dx1 + dy2 * dy1) * s2;
            double t = -1;
            if (v1 * (q2 - q1) > 0 && v2 * (q1 - q2) > 0) {
                t = (q2 - q1) / (v1 - v2);
            } else if (v1 * (q2 - q1) > 0) {
                t = (q2 - q1) / v1;
            } else if (v2 * (q1 - q2) > 0) {
                t = (q1 - q2) / v2;
            }
            return t;
        }
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    vector<int> dx(n);
    vector<int> dy(n);
    vector<double> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i] >> dx[i] >> dy[i] >> s[i];
        s[i] /= hypot(dx[i], dy[i]);
    }
    double best = -1;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            double t = time(x[i], y[i], dx[i], dy[i], s[i],
                            x[j], y[j], dx[j], dy[j], s[j]);
            if (t >= 0) {
                if (best < 0)
                    best = t;
                else
                    best = min(best, t);
            }
        }
    }
    if (best >= 0) {
        cout << setprecision(12) << best << "\n";
    } else {
        cout << "No show :(\n";
    }
    return 0;
}
