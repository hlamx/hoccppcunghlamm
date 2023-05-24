//bai 3 tin hoc tre
//tu 12h10 -> 12h41
// rewrite tu 8h20->9h
#include <bits/stdc++.h>
using namespace std;
long long a[1000001],n,i,m,tam,s,smax;
int main()
{
    ifstream fin("banhchung.inp");
    ofstream fout("banhchung.out");
    fin>>n>>m;
    for(i=1;i<=m;i++) fin>>a[i];
    for(i=1;i<=m;i++){
      if(a[i]+a[i+1]<=n) s+=a[i];
        if(smax<s&&s<=n) {smax = s; cout<<a[i]<<" ";}
      }
    if(a[1]+a[m]<=n&&a[1]+a[m]>=smax) {smax = a[1]+a[m];}
    fout<<smax;
    fin.close();
    fout.close();
    return 0;
}
