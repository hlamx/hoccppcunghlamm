#include <bits/stdc++.h>
using namespace std;
long long n,s,i;
int main()
{
    ifstream fin("photo.inp");
    ofstream fout("photo.out");
    fin>>n;
    if(n/2<=100) s = n/2*300+n%2*250;
    if(n/2>100) s = n/2 * 280 + n%2*220;
    fout<<s;
    fin.close();
    fout.close();
    return 0;
}
