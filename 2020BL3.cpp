#include <bits/stdc++.h>
using namespace std;
long long n,i,tam,d,a[1000001],h,j,kq;
int main()
{
    ifstream fin("hangcay.inp");
    ofstream fout("hangcay.out");
    fin>>n>>h;
    for(i=1;i<=n;i++) fin>>a[i];
    for(i=1;i<=n;i++){
        if(a[i]==h) d+=1;
    }
  fout<<d<<endl;

  for(i=1;i<=n;i++){
    if(a[i]==h) tam++;
    else tam = 0;
    if(kq<tam) kq = tam;
  }
  fout<<kq;
    fin.close();
    fout.close();
}
