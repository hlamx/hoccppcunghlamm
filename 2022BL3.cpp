#include <bits/stdc++.h>
using namespace std;
long long n,a[1000001],i,s;
int main()
{
    ifstream fin("vannghe.inp");
    ofstream fout("vannghe.out");
    fin>>n;
    for(i=1;i<=n;i++) fin>>a[i];
    sort(a+1,a+n+1);
      for(i=1;i<=n;i++) cout<<a[i]<<" ";
    for(i=1;i<=n;i++){
    if(a[i]==a[i+1]) {s+=2;}
    }
    cout<<endl<<s;
    fin.close();
    fout.close();
}
