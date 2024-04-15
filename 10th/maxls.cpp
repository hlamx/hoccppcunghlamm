#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll g[100001],k,limit,d,f[1000001],n,a[1000001],b[1000001],i,j,jmax,pos[1000001];
int main()
{
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("maxls.inp","r",stdin);
    freopen("maxls.out","w",stdout);
    cin>>n>>k;
    for(i=1;i<=n;i++) cin>>a[i];
    f[0] = 0;
    for(i=1;i<=n;i++) {
        jmax = 0;
        for(j=1;j<i;j++)
            if(abs(a[i] - a[j]) <= k) {
                if(f[j]>f[jmax]) jmax = j;
                    else
                    if(f[j]==f[jmax]&&g[j]>g[jmax]) jmax = j;
            }
            f[i] = f[jmax]+1;
        g[i] = g[jmax]+a[i];
        pos[i] = jmax;
    }

    ll m = 1;
    for(i=2;i<=n;i++)
        if(f[i]>f[m]) m = i;
        else
            if(f[i]==f[m]&&g[i]>g[m]) m = i;
    cout<<f[m]<<" "<<g[m]<<endl;
    ll k = 0;
    while(m>0) {
        k++;
        b[k] = m;
        m = pos[m];
    }
    for(i=k;i>=1;i--) cout<<a[b[i]]<<" ";
    return 0;
}
