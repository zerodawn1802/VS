#include <iostream>
#include <string >
using namespace std;
void tamphan(int n)
{
	string s="";
	if(n==0){
		cout <<0;
	}
	while (n!=0)
	{
		char c=n%3+'0';
		s.push_back(c);
		n/=3;
	}
	for (int i=s.size()-1;i>=0;i--) 
	{
		cout << s[i];
	}
}
int main()
{
	int n;
	cin >> n;
	tamphan(n);
}
