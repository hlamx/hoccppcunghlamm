#include <bits/stdc++.h>
using namespace std;
long long n,k,i,s;
int main()
{
    ifstream fin("giacong.inp");
    ofstream fout("giacong.out");
    fin>>n>>k;
    long long d = 1;
  s = k;
    while(s<n){
        d++;
        k*=2;
        s+=k;
    }
        fout<<d;
    fin.close();
    fout.close();
    return 0;
}
