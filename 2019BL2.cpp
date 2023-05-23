#include <bits/stdc++.h>
using namespace std;
long long n,i,s=1;
int main()
{
    ifstream fin("vikhuan.inp");
    ofstream fout("vikhuan.out");
    fin>>n;
    for(i=1;i<=n;i++) s*=2;
    fout<<s;
    fin.close();
    fout.close();
    return 0;
}
