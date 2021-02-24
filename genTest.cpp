#include <fstream>
#include "testlib.h"

using namespace std;
void writeTest(string path)
{
    ofstream f;
    f.open(path);
    int tg = rnd.next(1, int(100));
    for(int i = 0; i < tg; i++)
    {
    	int Q = rnd.next(1, int (1e5));
    	int N = rnd.next(1, int (1e5));
    	int P = rnd.next(1, int (1e5));
    	f << N <<' '<< Q << ' ' << P << endl;
    }
}
int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int test = 1;
    for(int i = 1; i <= test; i++)
    {
        string path = "./input/test[" + to_string(i) +"].in";
        writeTest(path);
    }
    return 0;
}
