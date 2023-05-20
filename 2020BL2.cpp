#include <bits/stdc++.h>
using namespace std;
long long n,i,tam;
int main()
{
    ifstream fin("giacong.inp");
    ofstream fout("giacong.out");
    fin>>n;
    for(i=1;i<=n;i++){
       tam+=i;
    }
    fout<<tam;
    fin.close();
    fout.close();
}
