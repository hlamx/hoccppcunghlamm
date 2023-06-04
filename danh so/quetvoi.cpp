#include <bits/stdc++.h>
using namespace std;
long long x,y,a,b,j,z,i,s,tam1,tam2,d=0;
int main()
{
    ifstream fin("quetvoi.inp");
    ofstream fout("quetvoi.out");
        fin>>x>>y>>a>>b;
       tam1 = __gcd(x,y);
       tam2 = x*y/tam1;
       for(i=a;i<=b;i++){
          if(i%tam2==0){
            d+=1;
            i=i+tam2-1;
          }
       }
       fout<<d;
    fin.close();
    fout.close();
    return 0;
}
