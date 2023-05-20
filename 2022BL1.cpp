#include <bits/stdc++.h>
using namespace std;
long long n,k,s,tam;
int main()
{
    ifstream fin("amthuc.inp");
    ofstream fout("amthuc.out");
   fin>>n>>k;
       if(n<=3) s = k - (k/100);
       else if(n>=4 && n<=6) s = k-((k/100)*3) ;
       else if(n>=7)s = s = k-((k/100)*5);
   fout<<s;
    fin.close();
    fout.close();
    return 0;
}
