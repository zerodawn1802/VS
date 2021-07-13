#include <bits/stdc++.h>
#include <stack>
using namespace std;
string str;
vector<int> dds; vector<int> so; vector<string> tu;
void in()
{
    dds.clear();
    tu.clear();
    so.clear();
}
int chuyenso(string x)
{
    int f = 0;
    if(x[0] == '-')
       f = 1;
    int S = 0;
    for(int i = f; i < x.length(); i++)
    {
        S = (S * 10) + (x[i] - '0');
    }
    if(f == 1) return 0 - S;
    return S;
}
void process()
{
    stack<string> st;
    for(int i = str.length() - 1; i >= 0; i--)
    {
        if(str[i] == ',' || str[i] == '.')
        {
            st.push("");
        }
        else if(str[i] != ' ')
        {
            string top = st.top();
            st.pop();
            top = str[i] + top;
            st.push(top);
        }
    }
    while(!st.empty())
    {
        string top = st.top();
        st.pop();
        if(top[0] == '-' || (top[0] >= '0' && top[0] <= '9'))
        {
            so.push_back(chuyenso(top));
            dds.push_back(1);
        }
        else
        {
            tu.push_back(top);
            dds.push_back(0);
        }
    }
}
void sapxep()
{
    sort(so.begin(), so.end());
    sort(tu.begin(), tu.end());
}
void out()
{
    int vtso = 0;
    int vttu = 0;
    for(int i = 0; i < dds.size() - 1; i++)
    {
        if(dds[i] == 1)
        {
            cout << so[vtso] << ", ";
            vtso++;
        }
        else
        {
            cout << tu[vttu] << ", ";
            vttu++;
        }
    }
    if(dds[dds.size() - 1] == 1)
    {
        cout << so[vtso] << ".";
        vtso++;
    }
    else
    {
        cout << tu[vttu] << ".";
        vttu++;
    }
    cout << endl;
}
int main()
{
    while(1)
    {
        getline(cin, str);
        if(str == ".") break;
        in();
        process();
        sapxep();
        out();
    }
    return 0;
}
