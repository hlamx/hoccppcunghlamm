#include <bits/stdc++.h>
using namespace std;
long long a,b,r,q,p;
int main()
{
    ifstream fin("phanso.inp");
    ofstream fout("phanso.out");
    fin>>p>>q;
    a = __gcd(p,q);
    fout<<p/a<<" "<<q/a;
    fin.close();
    fout.close();
    return 0;
}
