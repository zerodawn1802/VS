#include <iostream>
#include <string.h>
using namespace std;
void process()
{
	char s[1000];
	cin >> s;
	for(int i=2;i<strlen(s);i++)
	{
		int c=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0) c++;
		}
		if(c==2) s[i]='*';
	}
	cout << s;
}
int main()
{
	process();
	return 0;
}
