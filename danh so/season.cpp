#include <bits/stdc++.h>
using namespace std;
long long n,t,tam;
int main()
{
    ifstream fin("season.inp");
    ofstream fout("season.out");
    fin>>t;
    if(t==2||t==3||t==4) fout<<"XUAN";
    if(t==5||t==6||t==7) fout<<"HA";
    if(t==8||t==9||t==10) fout<<"THU";
    if(t==11||t==12||t==1) fout<<"DONG";
    fin.close();
    fout.close();
    return 0;
}
