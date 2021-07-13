#include <iostream>
#define MaxLen 15000
using namespace std;
int chuyendoichuoi(int x, int str[])
{
	int p = 1;
	int dd = 0;
	while(x / p != 0)
	{
		p = p * 10;
		dd++;
	}
	p = p / 10;
	for(int i = 0; i < dd; i++)
	{
		str[i] = (x / p) % 10;
		p = p / 10;
	}
	return dd;
}
int SumBig(int stra[], int dda, int strb[], int ddb, int strc[])
{
	int dd;
	if(dda > ddb) dd = dda;
	else dd = ddb;
	int ddc = 0;
	int nho = 0;
	for(int i = MaxLen - 1; i >= MaxLen - dd; i--)
	{
		int so = (stra[i] + strb[i]) + nho;
		strc[i] = so % 10;
		nho = so / 10;
		ddc++;
		if(i == MaxLen - dd && so / 10 > 0)
		{
			ddc++;
			strc[i - 1] = so / 10;
		}
	}
	return ddc;
}
int cop(int strb[], int ddb, int strc[])
{
	for(int i = MaxLen - 1; i >= 0; i--)
	{
		if(i >= MaxLen - ddb) strc[i] = strb[i];
		else strc[i] = 0;
	}
	return ddb;
}
int PeBig(int stra[], int dda, int strb[], int ddb, int strc[])
{
	int arrAtg[MaxLen];
	int arrBtg[MaxLen];
	int arrCtg[MaxLen];
	for(int i = 0; i < MaxLen; i++)
	{
		arrAtg[i] = 0;
		arrBtg[i] = 0;
	}
	int lenAtg = 0;
	int lenBtg = 0;
	int lenCtg = 0;
	for(int i = ddb - 1, vt = 0; i >= 0, vt <= ddb - 1; i--, vt++)
	{
		for(int j = 0; j < MaxLen; j++) arrAtg[i] = 0;
		int nho = 0;
		lenAtg = vt;
		for(int j = MaxLen - 1; j >= MaxLen - dda; j--)
		{
			int so = (strb[i] * stra[j]) + nho;
			arrAtg[j - vt] = so % 10;
			nho = so / 10;
			lenAtg++;
			arrAtg[j - vt - 1] = so / 10;
			if(j == MaxLen - dda && so / 10 > 0) lenAtg++;
		}
		lenCtg = SumBig (arrAtg, lenAtg, arrBtg, lenBtg, arrCtg);
		lenBtg = cop (arrCtg, lenCtg, arrBtg);
	}
	cop(arrBtg, lenBtg, strc);
	return lenBtg;
}
int main()
{
	int t;
	cin >> t;
	for(int i = 1; i <= t; i++)
	{
		int n, x;
		cin >> n >> x;
		int dem = 0;
		if(n < 20)
		{
			long long s = 1;
			for(int j = 1; j <= n; j++)
			{
				s *= j;
			}
			long long p = 1;
			while(s / p != 0)
			{
				int so = (s / p) % 10;
				if(so == x) dem++;
				p = p * 10;
			}
			cout << dem << endl;
		}
		else
		{
			int S[MaxLen] = {1, 2, 1, 6, 4, 5, 1, 0, 0, 4, 0, 8, 8, 3, 2, 0, 0, 0};
			int lenS = 18;
			for(int i = MaxLen - 1, j = lenS - 1; i >= MaxLen - lenS, j >= 0; i--, j--)
			{
				S[i] = S[j];
			}
			int Stg[MaxLen];
			int lenStg = 0;
			int str[4];
			int lens = 0;
			for(int i = 20; i <= n; i++)
			{
				lens = chuyendoichuoi(i, str);
				lenStg = PeBig(S, lenS, str, lens, Stg);
				lenS = cop(Stg, lenStg, S);
			}
			int dem = 0;
			for(int i = MaxLen - lenS; i < MaxLen; i++)
			{
				if(S[i] == x) dem++;
			}
			cout << dem << endl;
		}
	}
	return 0;
}
