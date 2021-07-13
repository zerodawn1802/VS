#include <iostream>
#include <string>
using namespace std;
int main()
{
	string h, r="R", l="L";
	cin >> h;
	string s="qwertyuiopasdfghjkl;zxcvbnm,./";
	string sai="";
	cin >> sai;
	if(h==r)
	{
		for(int i = 0; i < sai.size(); i++)
		{
			for(int j = 0; j < 30; i++)
			{
				if(sai.at(i)==s.at(9))
				{
					cout << "q";
				}
				else if(sai.at(i)==s.at(19))
				{
					cout << "a";
				}
				else if(sai.at(i)==s.at(29))
				{
					cout << "z";
				}
				else if(sai.at(i)==s.at(j))
				{
					cout << s.at(j+1);
				}
			}
		}
	}
	if(h==l)
	{
		for(int i = 0; i < sai.size(); i++)
		{
			for(int j = 0; j < 30; i++)
			{
				if(sai[i]==s[0])
				{
					cout << "p";
				}
				else if(sai[i]==s[10])
				{
					cout << ";";
				}
				else if(sai[i]==s[20])
				{
					cout << "/";
				}
				else if(sai[i]==s[j])
				{
					cout << s[j-1];
				}
			}
		}
	}
}
