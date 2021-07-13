#include <iostream>
#include <string>
using namespace std;
int chuyenso(string s)
{
    int S = 0;
    for(int i = 0; i < s.length(); i++)
    {
        int tmp = s[i] - '0';
        S = S * 10 + tmp;
    }
    return S;
}
string chuyenstr(int x)
{
    string s = "";
    while(1)
    {
        char tmp = x % 10 + '0';
        x /= 10;
        s = tmp + s;
        if(x == 0) break;
    }
    return s;
}
string xoa0(string s)
{
    while(1)
    {
        int vt = s.length() - 1;
        while (s[vt] != '0' && vt >= 0) vt--;
        if (vt >= 0)
            s.erase(s.begin() + vt, s.begin() + vt + 1);
        else
            break;
    }
    return s;
}

int main ()
{
    string a, b;
    cin >> a >> b;
    int aso = chuyenso(a), bso = chuyenso(b);
    int VT = chuyenso(xoa0(chuyenstr(aso + bso)));
    int amat0 = chuyenso(xoa0(a)), bmat0 = chuyenso(xoa0(b));
    int VP = amat0 + bmat0;
    if (VT == VP) cout << "YES";
    else cout<<"NO";
    
    return 0;
}
