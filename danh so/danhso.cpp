#include <bits/stdc++.h>
using namespace std;
long long n,k,i,s,tam;
int main()
{
    ifstream fin("danhso.inp");
    ofstream fout("danhso.out");
  fin>>n;
  for(i=1;i<=n;i++){
    s+=i;
    //cout<<s<<endl;
    if(s>n) {tam = i;break;}
  }
  fout<<tam;
    fin.close();
    fout.close();
    return 0;
}
