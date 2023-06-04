#include <bits/stdc++.h>
using namespace std;
long long n,k,i,s;
int main()
{
    ifstream fin("chiaqua.inp");
    ofstream fout("chiaqua.out");
    fin>>n;
    long long tam=0;
    for(i=1;i<=n;i++){
        if(i==1){
            s = 1;
        }
        else s+=3;
        //cout<<s<<endl;
        tam+=s;
    }
   fout<<tam;
    fin.close();
    fout.close();
    return 0;
}
