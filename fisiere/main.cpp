#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("input.in");
ofstream fout("output.out");


int main()
{

    int x, y;
    fin >> x >> y;

    fout << x << " " << y;
    return 0;
}
