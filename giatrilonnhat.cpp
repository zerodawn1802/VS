#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        long long k;
        cin >> k;
        if(k > 0) sum += k * 2;
    }
    cout << sum;
}