#include <bits/stdc++.h>
using namespace std;
long long m,n,a[1000001],b[1000001],i,d;
int main()
{
    ifstream fin("daytang.inp");
    ofstream fout("daytang.out");
    fin>>n;
   for(i=1;i<=n;i++) fin>>a[i];
for(i=2;i<=n;i++) {
   if(a[i-1]>a[i])
   {
       d=i;
       break;
   }
}

fout<<d;
    fin.close();
    fout.close();
    return 0;
}
