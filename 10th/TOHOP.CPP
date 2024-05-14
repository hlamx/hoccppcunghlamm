#include <bits/stdc++.h>
using namespace std;
long long i,n,k,x[101];
    ifstream fin("TOHOP.INP");
    ofstream fout("TOHOP.OUT");
void Tohop(int i){
    int j;
    for (j=x[i-1]+1;j<=n-(k-i);j++){
            x[i]=j;
            if (i==k){
                for (int t=1;t<=k;t++) fout<<x[t]<<" ";
                fout<<endl;
            }
            else Tohop(i+1);
        }
}
int main(){
    fin>>n>>k;
    Tohop(1);
    fin.close();
    fout.close();
}
