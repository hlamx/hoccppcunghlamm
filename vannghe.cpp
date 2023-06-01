#include <bits/stdc++.h>
using namespace std;
long long n,m,tam,hihi;
int main()
{
    ifstream fin("VANNGHE.inp");
    ofstream fout("VANNGHE.out");
    fin>>n>>m;
    tam = __gcd(n,m);
    fout<<tam<<endl<<n/tam<<" "<<m/tam;
    fin.close();
    fout.close();
    return 0;
}
