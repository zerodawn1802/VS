#include <bits/stdc++.h>
using namespace std;
void process(int T)
{
	int tt;
	cin >> tt;
	string str;
	cin >> str;
	string s1="TTT", s2="TTH", s3="THT", s4="THH", s5="HTT", s6="HTH", s7="HHT", s8="HHH";
	int dd[9]={0};
	for(int i = 0; i < str.size()-2; i++)
	{
		string s;
		for(int j = i; j <= i+2; j++)
		{
			if(str[j]=='T') s+="T";
			else s+="H";
		}
		if(s==s1) dd[0]++;
		if(s==s2) dd[1]++;
		if(s==s3) dd[2]++;
		if(s==s4) dd[3]++;
		if(s==s5) dd[4]++;
		if(s==s6) dd[5]++;
		if(s==s7) dd[6]++;
		if(s==s8) dd[7]++;
	}
	cout << tt << " " << dd[0] << " " << dd[1] << " " << dd[2] << " " << dd[3] << " " << dd[4] << " " << dd[5] << " " << dd[6] << " " << dd[7] << endl;
}
int main()
{
	int T;
	cin >> T;
	for(int i = 1; i <= T; i++)
	{
		process(T);
	}
}
