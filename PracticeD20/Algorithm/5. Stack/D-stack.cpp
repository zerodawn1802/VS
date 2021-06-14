#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, res = 0;
    cin >> n;
    vector<int> a(n), L(n), R(n);        
    for(int i = 0; i < n; i++) cin >> a[i];
    stack<int> s;
    s.push(-1);
    for(int i = 0; i < n; i++)
    {
        while (s.size() > 1 && a[s.top()] >= a[i]) s.pop();
        L[i] = s.top() + 1;
        s.push(i);
    }
    stack<int> st;
    st.push(n);
    for(int i = n - 1; i >= 0; i--)
    {
        while (st.size() > 1 && a[st.top()] >= a[i]) st.pop();
        R[i] = st.top() - 1;
        st.push(i);
    }
    for(int i = 0; i < n; i++)
    {
        if (R[i] - L[i] + 1 >= a[i]) res = max(res, a[i]);
    }
    cout << res * res;
}