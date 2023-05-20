#include <bits/stdc++.h>
using namespace std;
long long a[1000001],i,n,d,tam;
int main()
{
    ifstream fin("vannghe.inp");
    ofstream fout("vannghe.out");
    fin>>n;
    for(i=1;i<=n;i++) fin>>a[i];
    sort(a+1,a+n+1);
    a[0]=0;a[n+1]=0;
    for(i=1;i<=n;i++) {
        if(a[i]==a[i-1]||a[i]==a[i+1]) {
        d+=1;
        }
    }
    fout<<d;
    fin.close();
    fout.close();
    return 0;
}
