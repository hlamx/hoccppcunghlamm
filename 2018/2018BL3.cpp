#include <bits/stdc++.h>
using namespace std;
long long n,a[1000001],j,tam,tam2,i,s=1,b[1000001];
int main()
{
    ifstream fin("khambenh.inp");
    ofstream fout("khambenh.out");
    fin>>n;
    for(i=1;i<=n;i++) fin>>a[i];
    for(i=1;i<=n;i++) fin>>b[i];
   for(i=1;i<n;i++)
   for(j=i+1;j<=n;j++){
    if(a[i]>a[j]) {
    tam = a[i];
    a[i] = a[j];
    a[j] = tam;
    tam = b[i];
    b[i] = b[j];
    b[j] = tam;

    }
   }
   for(i=1;i<=n;i++){
    //cout<<a[i]<<" | "<<b[i]<<endl;
      //  if(a[i]<s) cout<<s<<endl;
    if(a[i]>=s) s=b[i]+a[i];
    else s+=b[i];
   }
   fout<<s;
    fin.close();
    fout.close();
    return 0;
}
