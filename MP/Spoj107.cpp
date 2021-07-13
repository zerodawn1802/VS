#include <bits/stdc++.h>
using namespace std;
bool ds(char *str)
{
    char dd[105];
    int a = -1;
    for( ; *str; str++)
    {
        if(*str == '[' || *str == '(')
		{
			a++;
			dd[a] = *str;
		}
        else if(*str == ')') 
        {
            if(a < 0) return false;
            if(dd[a] != '(') return false;
            a--;
        }
        else if(*str == ']') 
        {
            if(a < 0) return false;
            if(dd[a] != '[') return false;
            a--;
        }   
    }
    if(a == -1) return true;
    return false;
}
int main()
{
    char str[105];
    int a = 0;
    bool p[32305];
    do
    {
        gets(str);    
        if(*str == '.' && str[1] == 0) break;
        a++;
        p[a] = ds(str);
    }while(1);
    for(int i = 1; i <= a; i++)
    if(p[i]) cout << "yes" << endl;
	else cout << "no" << endl;
}
