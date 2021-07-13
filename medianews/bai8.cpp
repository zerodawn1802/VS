#include <bits/stdc++.h>
using namespace std;
int n;
string str;
void process()
{
    cin >> n;
    string str;
    cin >> str;
    int stop = 0;
    int a[100] = {0};
    int dem = 0;
    string b[100000];
    while(!stop)
	{
        string c = "";
        for(int i = 1; i <= n; i++)
		{
            if(a[i] == 1) c = c + str[i - 1];
        }
        b[dem] = c;
        dem++;
        int i = n;
        while(i > 0 && a[i] == 1)
		{
            a[i] = 0;
            i--;
        }
        if(i == 0) stop = 1;
        else a[i] = 1;
    }
    sort(b, b + dem);
    for(int i = 1; i < dem; i++) cout << b[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
	{
        process();
    }
    return 0;
}
