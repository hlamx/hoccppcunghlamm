#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll save[100001],dau[100001],n;
int tinh()
{
    int i , t, s , tam;
    s = 0;
    tam = dau[1];
    t = 1;
    for(i=2;i<=9;i++)
        if(dau[i]==0) t=t*10+i;
    else
    {
        s = s+t*tam;
        t = i;
        tam = dau[i];
    }
    s=s+t*tam;
    return s;
}
void tim(int k)
{
    int i , j;
    for(i=-1;i<=1;i++)
    if(k==1&&i==0) continue;
    else {
        dau[k]=i;
        if(k<9) tim(k+1);
        else {
            if(tinh()==n) {
                for(j=1;j<=9;j++) {
                    if(dau[j]==1&&j!=1) cout<<"+";
                    if(dau[j]==-1) cout<<"-";
                    cout<<j;
                }
                cout<<endl;
                //d++;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("dauv2.inp","r",stdin);
    freopen("dauv2.out","w",stdout);
    cin>>n;
    tim(1);
    return 0;
}
