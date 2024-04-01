#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll x[11],j,i,n;
ifstream fin("hoanvi.inp");
ofstream fout("hoanvi.out");
bool chuaxet[11];
void saukitu(int i)
{
    int j;
    for(j=0;j<=1;j++)
        if(x[i-1]!=1 || j != 1){
            x[i] = j;
            if(i==n){
                for(int t = 1;t<=n;t++)
                    if(x[t] == 0) fout<<"A";
                    else fout<<"B";
                fout<<endl;
            }
            else saukitu(i+1);
        }
}
int main()
{

    ios_base::sync_with_stdio();
    fin.tie(NULL);
    fout.tie(NULL);
    fin>>n;
    for(i=1;i<=n;i++) x[i] = 1;
    saukitu(1);
    return 0;
}
