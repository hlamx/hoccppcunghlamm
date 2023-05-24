#include <bits/stdc++.h>
using namespace std;
long long n,m,i,c,t,a[1000001],hihi,s,h,kq=1e13,b;
int main(){
    ifstream fi ("lenliep.inp");
    ofstream fo ("lenliep.out");
    fi>>n>>m;
    for(i=1;i<=n;i++)fi>>a[i];
    for(i=1;i<=n;i++)s=max(s,a[i]);
    for(i=1;i<=n;i++){
        t+=s-a[i];
    }
    long long  x = a[n/2-1];
   
    for(i=1;i<=n;i++) b+=abs(a[i]-x)
    fo<<t*m<<endl<<b*m;
    return 0;
}
