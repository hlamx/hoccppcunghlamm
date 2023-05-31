#include <bits/stdc++.h>
using namespace std;
long long a[1000001],s,tam,i,n;
int main()
{
    ifstream fin("muasach.inp");
    ofstream fout("muasach.out");
    fin>>n;
    for(i=1;i<=n;i++) fin>>a[i];
    sort(a+1,a+n+1,greater<int>());
    for(i=1;i<=n;i++) {
        s+=a[i];
    }
    for(i=3;i<=n;i+=3) {
        tam+=a[i];
        //cout<<tam<<" | "<<a[i+2]<<endl;
    }
    fout<<s<<endl<<tam;
    fin.close();
    fout.close();
    return 0;
}
