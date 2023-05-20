#include <bits/stdc++.h>
using namespace std;
long long n,i,tam=1;
int main()
{
    ifstream fin("muatap.inp");
    ofstream fout("muatap.out");
    fin>>n;
    for(i=1;i<=n;i++){
        if(n<=10) tam = n*5000;
        else if(n>=11&&n<=20) tam = n*4800;
        else if(n>=20) tam = n*4500;
    }
    fout<<tam;
    fin.close();
    fout.close();
}
