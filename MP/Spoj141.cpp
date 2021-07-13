#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
	int trung = 0, svt = 0;
    for(int i = 0; i < str.size() - 1; i++)
    {
        if(str[i] == ')' && str[i + 1] == ')') trung++;
    }
    for(int i = 0; i < str.size() - 1; i++)
    {
        if(str[i] == '(' && str[i + 1] == '(') svt += trung;
        if(str[i] == ')' && str[i + 1] == ')') trung--;
    }
    cout << svt;
}
