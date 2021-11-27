#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        vector<int> c;
        deque<int> dq;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            c.push_back(a[i]);
        }
        for(int i = 0; i < n - 1; i++)
        {
            while(dq.size() && c[dq.back()] <= c[i]) dq.pop_back();
//            if(dq.size()) cout << "dq : ";
//            for(int j = 0; j < dq.size(); j++) cout << dq[j] << " ";
//            cout << endl;
            dq.push_back(i);
//            cout << "dq : ";
//            for(int j = 0; j < dq.size(); j++) cout << dq[j] << " ";
//            cout << endl;
            if(dq.front() + k <= i) dq.pop_front();
            c[i + 1] += c[dq.front()];
        }
        cout << c[n - 1] << endl;
    }
}
