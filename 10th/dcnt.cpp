#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll g[10000001],f[10000001],n,a[10000001],b[10000001],i,j,jmax,pos[10000001];
int main()
{
    ios_base::sync_with_stdio();
    ifstream fin("DCNT.inp");
    ofstream fout("DCNT.out");
    fin.tie(NULL);
    fout.tie(NULL);
    fin>>n;
    for(i=1;i<=n;i++) fin>>a[i];
    for(i=1;i<=n;i++) {
        jmax = 0;
        for(j=1;j<i;j++)
            if(__gcd(a[j],a[i])==1&&f[j]>f[jmax]) jmax = j;
            f[i] = f[jmax]+1;
            pos[i]=jmax;
    }
    ll m = 1;
    for(i=2;i<=n;i++)
        if(f[i]>f[m]) m = i;
    fout<<f[m]<<endl;
    ll k = 0;
    while(m>0) {
        k++;
        b[k] = m;
        m = pos[m];
    }
    for(i=k;i>=1;i--) fout<<a[b[i]]<<" ";
    fin.close();
    fout.close();
    return 0;
}
