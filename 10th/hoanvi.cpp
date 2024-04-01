#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll x[11],j,i,n;
ifstream fin("hoanvi.inp");
ofstream fout("hoanvi.out");
bool chuaxet[11];
void hoanvi(int i)
{
    int j;
    for(j=1;j<=n;j++)
        if(chuaxet[j]==true) {
            x[i] = j;
            chuaxet[j] = false;
            if(i==n)
            {
                for(int t = 1;t<=n;t++) fout<<x[t]<<" ";
                fout<<endl;
            }
            else hoanvi(i+1);
            chuaxet[j] = true;
    }
}
int main()
{

   // ios_base::sync_with_stdio();
    //fin.tie(NULL);
    //fout.tie(NULL);
    fin>>n;
    for(i=1;i<=n;i++) chuaxet[i] = true;
    hoanvi(1);
    return 0;
}
