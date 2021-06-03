#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, res = 0;
        cin >> n;
        vector<int> a(n), L(n), R(n);        
        for(int i = 0; i < n; i++) cin >> a[i];
        deque<int> dq;
        dq.push_back(-1);
        for(int i = 0; i < n; i++)
        {
            while (dq.size() > 1 && a[dq.back()] >= a[i]) dq.pop_back();
            L[i] = dq.back() + 1;
            dq.push_back(i);
        }
        dq.clear();
        dq.push_back(n);
        for(int i = n - 1; i >= 0; i--)
        {
            while (dq.size() > 1 && a[dq.back()] >= a[i]) dq.pop_back();
            R[i] = dq.back() - 1;
            dq.push_back(i);
        }
        for(int i = 0; i < n; i++)
        {
            if (R[i] - L[i] + 1 >= a[i]) res = max(res, a[i]);
        }
        cout << res << endl;
    }
    return 0;
} 