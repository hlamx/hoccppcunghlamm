#include <bits/stdc++.h>
using namespace std;
//using ll = long long;
#define ll long long
string a,b,s,sub;
ll n,i,j,d,f[5005][5005];
int main()
{
   ios_base::sync_with_stdio();
   cin.tie(NULL);
   cout.tie(NULL);
   freopen("string.inp","r",stdin);
   freopen("string.out","w",stdout);
    cin>>a>>b;
    ll n = a.size();
    ll m = b.size();
    for(i=1;i<=n;i++) f[i][n] = 0;
    for(j=1;j<=m;j++) f[m][j] = 0;
    for(i = n-1;i>=0;i--)
    for(j=m-1;j>=0;j--){
        if(a[i]==b[j]) f[i][j] = f[i+1][j+1]+1;
        else f[i][j] = max(f[i+1][j],f[i][j+1]);
    }
    cout<<f[0][0]<<endl;
    ll k =0;
    for(i=n;i>=0;i--)
    for(j=m;j>=0;j--) {
        if(f[i][j]>k) {
            k = f[i][j];
            sub+=a[i];
        }
    }
    for(i=sub.size()-1;i>=0;i--) s+=sub[i];
    cout<<s;
}
