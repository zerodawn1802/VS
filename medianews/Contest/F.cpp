#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n<2)return false;
    for(int i=2;i*i<=n;i++)if(n%i==0)return false;
    return true;
}
long long countDigit(int n)
{
    long long res=0;
    while(n)
	{
        res+=n%10;
        n/=10;
    }
    return res;
}
long long backTrack(int n)
{
    if(n==1)return 1;
    if(isPrime(n)==1)
	{
        return countDigit(n);
    }
    long long result=1;
    for(int i=2;i*i<=n;i++)
	{
        if(n%i==0)
		{
            result=(result*backTrack(i));
        	if(n/i!=i)
			{
            	result=(result*backTrack(n/i));
            }
        }
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    cout<<backTrack(n);
    return 0;
}
