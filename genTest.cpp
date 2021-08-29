#include "testlib.h"
#include<bits/stdc++.h>

const int val[30] = {0,1,2,1,4,3,2,1,5,6,2,1,8,7,5,9,8,7,3,4,7,4,2,1,10,9,3,6,11,12};


using namespace std;

void writeTest(string path, string pathh)
{
    ofstream f;
    ofstream fr;
    f.open(path);
    fr.open(pathh);
    int T = rnd.next(1, 100);
    f << T << endl;
    for(int i = 0; i < T; i++)
    {
        int n = rnd.next(1, (int)1e6);
        f << n << endl;
        int h[100005];
        long result = 0, uv = n;
	    
	    for (int i = 1; i*i <= n; i++){
			if (h[i] == 0) {
		        long count = 1;
		        if (i > 1){
					for (long j = i*i; j <= n; j *= i) {
			            count++;
			            if (j < 100000){
			            	h[j] = 1;
						}
			        }
				}
		        result ^= val[count];
		        uv -= count;
		    }
		}
	    if(uv % 2) result ^= 1;
	    if(result){
	    	fr << "Orez";
		} else {
			fr << "Me";
		}
	    fr << endl;
    }
}
int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int test = 100;
    for(int i = 1; i <= test; i++)
    {
        string path = "./input/test[" + to_string(i) +"].in";
        string pathh = "./output/test[" + to_string(i) + "].out";
        writeTest(path, pathh);
    }
    return 0;
}