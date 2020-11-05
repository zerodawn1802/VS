#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("file.txt", ios::out);
    for(int i = 1000000; i >= 1; i--) file << i << " ";
}