#include <bits/stdc++.h>
using namespace std;
long long d,n,s,t,tam,i,j;
int main()
{
    ifstream fin("doiban.inp");
    ofstream fout("doiban.out");
    fin>>s>>t;
    tam = __gcd(s,t);
    i = s*t/tam;
    fout<<i<<endl<<i/s<<" "<<i/t;
    fin.close();
    fout.close();
    return 0;
}
