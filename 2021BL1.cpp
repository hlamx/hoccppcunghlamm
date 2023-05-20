#include <bits/stdc++.h>
using namespace std;
long long n,i,s;
int main()
{
    ifstream fin("khautrang.inp");
    ofstream fout("khautrang.out");
    fin>>n;
    for(i=1;i<=n;i++){
        if(n<=3) s = n*45000;
        else if(n>=4&&n<=10) s = n*40000;
        else if(n>=11) s=n*38000;
    }
    fout<<s;
    fin.close();
    fout.close();
    return 0;
}
