#include <bits/stdc++.h>
using namespace std;
long long n,i,s,a[100001];
int main()
{
    ifstream fin("ngondoi.inp");
    ofstream fout("ngondoi.out");
    fin>>n;
    for(i=1;i<=n;i++) fin>>a[i];
    for(i=2;i<=n-1;i++) {
        if(a[i]>a[i-1]&&a[i]>a[i+1]) s+=1;
    }
    fout<<s;
    fin.close();
    fout.close();
    return 0;
}
