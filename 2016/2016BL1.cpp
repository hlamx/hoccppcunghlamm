#include <bits/stdc++.h>
using namespace std;
long long tam,n,s;
int main()
{
    ifstream fin("tiennuoc.inp");
    ofstream fout("tiennuoc.out");
    fin>>n;
    if(n<=10) s=n*4000;
    if(n>10) s = 4000*10+(n-10)*7000;
    fout<<s;
    fin.close();
    fout.close();
    return 0;
}
