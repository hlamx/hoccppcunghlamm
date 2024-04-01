#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll save[100001],dau[100001],n,i;
void tim(int i, int sum)
{
    if(i==10){
        if(sum==n){
        for(int k = 1;k<=9;k++){
            if(dau[k]==0&&k!=1) cout<<"+ ";
            else if(dau[k]==1) cout<<"- ";
                    cout<<save[k]<<" ";
        }
        cout<<endl;
        }
        return;
    }
    save[i] = i;
    dau[i] = 0;
    tim(i+1,sum+save[i]);
    save[i] = i;
    dau[i] = 1;
    tim(i+1,sum-save[i]);
}
int main()
{
    ios_base::sync_with_stdio();
    cin>>n;
    tim(1,0);
    return 0;
}
