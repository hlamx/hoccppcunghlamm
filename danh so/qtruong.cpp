#include <bits/stdc++.h>
using namespace std;
long long m,n,a,i,d;
int main()
{
    ifstream fin("qtruong.inp");
    ofstream fout("qtruong.out");
    fin>>m>>n>>a;
    i = m/a;
    if(m%a!=0) i++;
    d = n/a;
    if(n%a!=0) d++;
    fout<<d*i;
    fin.close();
    fout.close();
    return 0;
}
