#include <bits/stdc++.h>
using namespace std;
long long d,n,s,t,tam,i,j;
int main()
{
    ifstream fin("tauthuy.inp");
    ofstream fout("tauthuy.out");
    fin>>n>>s>>t;
    tam = __gcd(s,t);
    i = s*t/tam;
    fout<<n/i;
    fin.close();
    fout.close();
    return 0;
}
