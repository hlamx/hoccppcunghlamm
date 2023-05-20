#include <bits/stdc++.h>
using namespace std;
long long n,m,i,a,b,j;
int main()
{
    ifstream fin("laodong.inp");
    ofstream fout("laodong.out");
    fin>>n>>m;
   for(i=1;i<=n;i++)
   for(j=1;j<=n;j++){
    if(i+j==n&&i*5000+j*7000==m)
        fout<<i<<" "<<j<<endl;
   }
    fin.close();
    fout.close();
    return 0;
}
