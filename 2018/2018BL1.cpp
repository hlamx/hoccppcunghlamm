#include <bits/stdc++.h>
using namespace std;
long long n,a,s;
int main()
{
    ifstream fin("dulich.inp");
    ofstream fout("dulich.out");
    fin>>n>>a;
    if(n<15) s = a*n;
    if(n>=15&&n<=30) s = (a*n)-(a*n*10/100);
    if(n>30) s=(a*n)-(a*n*15/100);
    fout<<s;
    fin.close();
    fout.close();
    return 0;
}
