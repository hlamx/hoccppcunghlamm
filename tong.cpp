//lam tu 9h30 -> 10h dich xong sap khoc me luon
//bai 2 tin hoc tre 2023
#include <bits/stdc++.h>
using namespace std;
 long long n,k,p,a[100001],tam,s,i,d,hihi,b[100001],j;

int main()
{
    ifstream fin("tong.inp");
    ofstream fout("tong.out");
    fin>>n>>k>>p;
    for(i=1;i<=n;i++) fin>>a[i];
    for(i=1;i<=n;i++) if(a[i]==p) tam = i;
    while (d<=k){
    for(i=1;i<=k;i++) {b[i] = a[i];}
    d+=1;
    }
    for(i=1;i<=k;i++){
            if(b[i]==0) b[i]=a[i-n];
        s+=b[i];
    }
    fout<<s%10000007;
      fin.close();
    fout.close();
    return 0;
}
