#include <bits/stdc++.h>
using namespace std;
long long n,a,m,tam,s;
int main()
{
    ifstream fin("hoahong.inp");
    ofstream fout("hoahong.out");
    fin>>n>>m>>a;
    if(n>=a) s = n*m*0.75;
        else s = n*m;
    fout<<s;
fin.close();
fout.close();
return 0;
}
