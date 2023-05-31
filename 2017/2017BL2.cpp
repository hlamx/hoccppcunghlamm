#include <bits/stdc++.h>
using namespace std;
long long a[1000001],s,tam,i,n,m,k;
int main()

{
    ifstream fin("chianhom.inp");
    ofstream fout("chianhom.out");
    fin>>n>>m>>k;
   if(n/2>m) s=m;
   else s = n/2;
      fout<<s<<endl;
   tam = (n+m)-(s*3);
   if(tam<k) {
        long long y = k - tam;
        s-=y/3;
        if(y%3!=0){
            s-=1;
        }
   }
   fout<<s;
    fin.close();
    fout.close();
    return 0;
}
