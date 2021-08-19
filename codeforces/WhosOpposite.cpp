/*
Who's Opposite

Some number of people (this number is even) have stood in a circle. The people stand in the circle evenly. They are numbered clockwise starting from a person with the number 1. Each person is looking through the circle's center at the opposite person.
A sample of a circle of 6 persons. The orange arrows indicate who is looking at whom.
You don't know the exact number of people standing in the circle (but this number is even, no doubt). It is known that the person with the number a is looking at the person with the number b (and vice versa, of course). What is the number associated with a person being looked at by the person with the number c? If, for the specified a, b, and c, no such circle exists, output -1.
Input
    The first line contains one integer t (1≤t≤104) — the number of test cases. Then t test cases follow.
    Each test case consists of one line containing three distinct integers a, b, c (1≤a,b,c≤108).
Output
    For each test case output in a separate line a single integer d — the number of the person being looked at by the person with the number c in a circle such that the person with the number a is looking at the person with the number b. If there are multiple solutions, print any of them. Output −1 if there's no circle meeting the given conditions.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        if(a > b) swap(a, b);
        long long k = b - a;
        k = k - (a - 1) - 1;
        long long max = b + k;
        if(c > max || k < 0) cout << "-1";
        else
        {
            if(c + (b - a) > max) cout << c - (b - a);
            else cout << c + (b - a);
        }
        cout << endl;
    }
}