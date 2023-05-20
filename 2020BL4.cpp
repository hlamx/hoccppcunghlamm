#include <bits/stdc++.h>
using namespace std;
long long a[1000001],i,n,d,tam;
int main()
{
    ifstream fin("doidua.inp");
    ofstream fout("doidua.out");
    fin>>n;
    for(i=1;i<=n;i++) fin>>a[i];
    sort(a+1,a+n+1);
    for(i=2;i<=n;i++) {
        if(a[i]==a[i-1]) {
        d+=1;
        i++; // vi a[i] ghep voi a[i-1] thi a[i+1] kh dc ghep voi a[i] => a[i+2] ghep voi a[i]
        }

    }
    fout<<d;
    fin.close();
    fout.close();
    return 0;
}
