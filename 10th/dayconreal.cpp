#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll g[100001],f[1000001],n,a[1000001],b[1000001],i,j,jmax,pos[1000001];
int main()
{
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("incseq.inp","r",stdin);
    freopen("incseq.out","w",stdout);
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=1;i<=n;i++) {
        jmax = 0;
        for(j=1;j<i;j++)
            if(a[j]<a[i]&&f[j]>f[jmax]) jmax = j;
            f[i] = f[jmax]+1;
            pos[i]=jmax;

    }
    ll m = 1;
    for(i=2;i<=n;i++)
        if(f[i]>f[m]) m = i;
    cout<<f[m]<<endl;
    ll k = 0;
    while(m>0) {
        k++;
        b[k] = m;
        m = pos[m];
    }
    for(i=k;i>=1;i--) cout<<b[i]<<" "<<a[b[i]]<<endl;
    return 0;
}
