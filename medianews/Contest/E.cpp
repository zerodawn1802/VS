#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct sinhVien
{
	string ten="";
	int diemToan=0;
	int diemLi=0;
	int diemC=0;
	int diemMax=0;
};
int main()
{
	int n;
	cin >> n;
	cin.ignore();
	vector<sinhVien> sV(n);
	for(int i = 0; i < n; i++)
	{
		getline(cin,sV[i].ten);
	}
	for(int i = 0; i < n; i++)
	{
		cin >> sV[i].diemToan;
	}
	for(int i = 0; i < n; i++)
	{
		cin >> sV[i].diemLi;
	}
	for(int i = 0; i < n; i++)
	{
		cin >> sV[i].diemC;
	}
	int Max=0;
	for(int i = 0; i < n; i++)
	{
		sV[i].diemMax=sV[i].diemToan+sV[i].diemLi+sV[i].diemC;
	}
	for(int i = 0; i < n; i++)
	{
		if(Max < sV[i].diemMax) Max=sV[i].diemMax;
	}
	for(int i = 0; i < n; i++)
	{
		if(sV[i].diemMax==Max) cout << sV[i].ten << " " << sV[i].diemToan << " " << sV[i].diemLi << " " << sV[i].diemC << endl;
	}
}
