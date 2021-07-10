#include "testlib.h"
#include<bits/stdc++.h>

using namespace std;
void writeTest(string path)
{
    ofstream f;
    f.open(path);
    // int Q = rnd.next(1,int (1e5));
    int T = rnd.next(1, int(10));
    f << T << endl;
    for(int i = 0; i < T; i++)
    {
        int so1 = rnd.next(1, (int)(100));
        f << so1 << endl;
        for(int j = 0; j < so1; j++)
        {
            int so3 = rnd.next((int)-1e9, (int)(1e9));
            int so4 = rnd.next((int)-1e9, (int)(1e9));
            f << so3 << " " << so4 << endl;
        }
        f << endl;
    }
}
int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int test = 100;
    for(int i = 1; i <= test; i++)
    {
        string path = "./input/test[" + to_string(i) +"].in";
        writeTest(path);
    }
    return 0;
}