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
        c=s/2;
        hihi+=c-a[i];
    }
    for(h=1;h<=1000;h++){
        b=0;
        for(i=1;i<=n;i++)
            b=b+abs(a[i]-h);
        if(b<kq)kq=b;
    }
    fo<<t*m<<endl<<kq*m;
    return 0;
}
