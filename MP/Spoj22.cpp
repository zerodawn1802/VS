#include <bits/stdc++.h>
using namespace std;
void process(int n)
{
	string s = "", s1 = "123456790", s2 = "098765432";
    int n1 = (n - 1) / 9, n2 = n - 9 * n1;
    for(int i = 1; i <= n2; i++) s.insert(s.length(), 1, (char)(i + '0'));
    for(int i = n2 - 1; i > 0; i--) s.insert(s.length(), 1, (char)(i + '0'));
    if(n > 9)
    {
        for(int i = 0; i < n1; i++) s.insert(0, s1);
        for(int i = 0; i < n1; i++) s.insert(s.length() - 1, s2);
    }
    cout << s << endl;
}
int main()
{
    int k, n;
    cin >> k;
    for(int i = 0; i < k; i++)
    {
        cin >> n;
        process(n);
    }
    return 0;
}
