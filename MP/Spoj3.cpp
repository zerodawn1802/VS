#include <iostream>
#include <string>
using namespace std;
void process()
{
	string s1, s2;
	cin >> s1 >> s2;
	int dd1[1000]={0}, dd2[1000]={0};
	if(s1.size()!=s2.size()) cout << "NO" << endl;
	else
	{
		for(int i = 0; i < s1.size(); i++)
		{
			for(char j='a'; j <= 'z'; j++)
			{
				if(s1[i]==j) dd1[(int)j]++;
			}
		}
		for(int i = 0; i < s1.size(); i++)
		{
			for(char j='a'; j <= 'z'; j++)
			{
				if(s2[i]==j) dd2[(int)j]++;
			}
		}
		int d=0;
		for(char i = 'a'; i <= 'z'; i++)
		{
			if(dd1[i]!=dd2[i]) 
			{
				d++;
			}
		}
		if(d!=0) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
}
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		process();
	}
}
