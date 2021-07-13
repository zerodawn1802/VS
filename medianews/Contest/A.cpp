#include <iostream>
#include <string.h>
using namespace std;
void process()
{
	char s[1000];
	fgets(s,1000,stdin);
	strupr(s);
	char str[26];
	strcpy(str,"ABCDEFGHIJKLMNOPQRSTUVXYZW");
	int a[26]={0};
	for(int i=0;i<strlen(s);i++)
	{
		for(int j=0;j<26;j++)
		{
			if(s[i]==str[j]) a[j]++;
		}
	}
	for(int i=0;i<26;i++)
	{
		if(a[i]!=0) cout << str[i] << " " << a[i] << endl;
	}
}
int main()
{
	process();
}
