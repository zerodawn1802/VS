#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s, str = "";
    cin >> s;
    for(int i = 0; i < s.length(); i++)
    {
        str = "";
        for(int j = i; j < s.length(); j++)
        {
            str += s[j];
            cout << str << endl;
        }
    }
    return 0;
}
