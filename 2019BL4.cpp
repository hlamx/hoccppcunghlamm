#include <bits/stdc++.h>
using namespace std;
long long n,i,d,s,a,b,tam,t;

int main()
{
    ifstream fin("donuoc.inp");
    ofstream fout("donuoc.out");
    fin>>a>>b>>n;
    //tam = 1;
    while(d<n-2){
        s=b*2-a;
    a = b;
    b = s;
    d++;
    }
    fout<<s;
    fin.close();
    fout.close();
    return 0;
}
