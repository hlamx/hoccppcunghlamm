#include <bits/stdc++.h>
using namespace std;
long long tam,n,s;
int main()
{
    ifstream fin("taxi.inp");
    ofstream fout("taxi.out");
    fin>>n;
   if(n==1) s = 15000;
   if(n>=2&&n<=10) s = 15000+(n-1)*14000;
   if(n>=11) s = 15000+14000*9+(n-10)*12000;
    fout<<s;
    fin.close();
    fout.close();
    return 0;
}
