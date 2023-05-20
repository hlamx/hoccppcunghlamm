#include <bits/stdc++.h>
using namespace std;
long long kq,t,n,a[1000001],i,k,s,m=1;
int main()
{
    ifstream fin("dieuche.inp");
    ofstream fout("dieuche.out");
    fin>>n>>k;
    for(i=1;i<=n;i++) fin>>a[i];
    sort(a+m,a+n+1);
    while(m<n){
        sort(a+m,a+n+1);
        s=0;
        if(n-m+1<k) k = n-m+1;
        for(i=m;i<=m+k-1;i++){
            s+=a[i];
        }
        kq=kq+a[m+k-1]-a[m];
        n++;
        a[n] = s;
        m=m+k;
    }
    fout<<kq;
    fin.close();
    fout.close();
    return 0;
}
