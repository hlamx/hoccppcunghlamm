#include <bits/stdc++.h>
using namespace std;
long long n,i,k,s,a[1000001],j;
int main()
{
    ifstream fin("sanxuat.inp");
    ofstream fout("sanxuat.out");
    fin>>n>>k;
   for(i=1;i<=n;i++) fin>>a[i];
   for(i=1;i<=n;i++) s+=a[i];
    sort(a+1,a+n+1,greater<int>());
    for(i=1;i<=k;i++) {
        j+=a[i];
        //if (a[n-k+i] != 0 ) j +=a[n-k+i];
    }

   fout<<s<<endl<<j;
    fin.close();
    fout.close();
    return 0;
}
