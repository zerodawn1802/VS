#include "testlib.h"
#include<bits/stdc++.h>


using namespace std;

void writeTest(string path)
{
    ofstream f;
    f.open(path);
    int n = rnd.next(1, 6);
    f << n;
    int t = rnd.next(1, 9999);
    for(int i = 0; i < t; i++)
    {
        int j = rnd.next(0, 9);
        f << j;
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