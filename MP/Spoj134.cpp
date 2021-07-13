#include <bits/stdc++.h>
using namespace std;
void swap(string &str, string &b)
{
    string tmp;
    tmp = str;
	str = b;
	b = tmp;
}
struct a
{
    string b;
};
int main()
{
    int n, x = 0;
    a c[502];
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int t;
        string str;
        cin >> str;
        for(int j = 0; j < str.length(); j++)
        {
            t = 0;
            if(str[j] >= '0' && str[j] <= '9')
            {
                c[x].b = " ";
                while(str[j] >= '0'&& str[j] <= '9')
                {
                    c[x].b.insert(c[x].b.size() - 1, 1, str[j]);
                    j++;
                }
                while(c[x].b[0] == '0' && c[x].b.size() > 2) c[x].b.erase(0, 1);
                x++;
            }
        }
    }
    for(int i = 0; i < x - 1; i++)
    {
        for(int j = i + 1; j < x; j++)
        {
            if(c[i].b.size() > c[j].b.size()) swap(c[i].b, c[j].b);
            else if(c[i].b.size() == c[j].b.size())
            {
                if(c[i].b > c[j].b) swap(c[i].b, c[j].b);
            }
        }
    }
    for(int i = 0; i < x; i++) cout << c[i].b << endl;
}
