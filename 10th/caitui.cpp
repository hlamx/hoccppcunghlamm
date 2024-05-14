#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n , i , j ,m , d,f[5005][5005],a[5005],b[5005],v[5005],w[5005];
int main()
{
   ios_base::sync_with_stdio();
   cin.tie(NULL);
   cout.tie(NULL);
   freopen("bag.inp","r",stdin);
   freopen("bag.out","w",stdout);
    cin>>n>>m;
    for(i=1;i<=n;i++) cin>>w[i]>>v[i];
    for(i=1;i<=n;i++) f[i][0] = 0;
    for(i=1;i<=m;i++) f[0][i] = 0;
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++) {
      f[i][j] = f[i-1][j];
      if(j>=w[i])
        if(f[i][j]<f[i-1][j-w[i]] + v[i])
        f[i][j]=f[i-1][j-w[i]] + v[i];
    }
    cout<<f[n][m]<<" ";
   ll k = 0;
    j = m;
    for(i=n;i>=1;i--) {
        if(f[i][j] != f[i-1][j]) {
            k++;
            b[k] = i;
            j=j-w[i];
        }
    }
    cout<<k<<endl;
    for(i=k;i>=1;i--) cout<<b[i]<<endl;
}
