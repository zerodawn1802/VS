#include <iostream>
#include <string>
using namespace std;
void process()
{
	string str;
	getline(cin,str);
    int p=0;
    while(str[p]==' ')
    {
    	if(str[p]==' ') str.erase(p,1);
    	p++;
	}
	int k=str.size()-1;
	while(str[k]==' ')
	{
		if(str[k]==' ') str.erase(k,1);
		k--;
	}
    int index = 0;
    while(index < str.size())
	{
        while(str[index] == ' ' && str[index + 1] == ' ')
		{
            str.erase(index, 1);
        }
        index++;
    }
    for(int i = 0; i < str.size(); i++)
    {
    	if(str[i] <= 'Z' && str[i] >= 'A') str[i]=str[i]-'A'+'a';
	}
    int l=str.size()-1;
    while(l >= 0)
    {
    	if(str[l-1] == ' ') str[l] = str[l] - 'a' + 'A';
    	l--;
	}
	cout << str;
}
int main()
{
	process();
	return 0;
}
