#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct mara
{
	int h=0;
	int m=0;
	int s=0;
};
int main()
{
	int n;
	cin >> n;
	vector<mara> ng(n);
	vector<int> tg(n);
	for(int i = 0; i < n; i++)
	{
		cin >> ng[i].h >> ng[i].m >> ng[i].s;
	}
	for(int i = 0; i < n; i++)
	{
		tg[i] = ng[i].h*3600 + ng[i].m*60 + ng[i].s;
	}
	int tmp;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(tg[i] > tg[j])
			{
				tmp=tg[i];
				tg[i]=tg[j];
				tg[j]=tmp;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		int hh=0, mm=0, ss=0;
		hh=tg[i]/3600;
		mm=(tg[i]-hh*3600)/60;
		ss=tg[i]-hh*3600-mm*60;
		cout << hh << " " << mm << " " << ss << endl;
	}
}
