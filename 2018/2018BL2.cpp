#include <bits/stdc++.h>
using namespace std;
long long n,k,d,i,s;
int main()
{
    ifstream fin("xepthap.inp");
    ofstream fout("xepthap.out");
    fin>>n>>k;
    for(i=n;i>=1;i--) s+=i;
    for(i=1;i<=k;i++){
        k=k-i;
        d+=1;
    }
    fout<<s<<endl<<d;
    fin.close();
    fout.close();
    return 0;
}
