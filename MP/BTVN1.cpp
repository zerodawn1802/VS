#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Team
{
	int ng1=0,ng2=0,ng3=0;
};
int main()
{
	int n;
	cin >> n;
	vector<Team> diem(n);
	for(int i = 0; i < n; i++)
	{
		cin >> diem[i].ng1 >> diem[i].ng2 >> diem[i].ng3;
	}
	int dem=0;
	for(int i = 0; i < n; i++)
	{
		if(diem[i].ng1+diem[i].ng2+diem[i].ng3>=2) dem++;
	}
	cout << dem;
}
