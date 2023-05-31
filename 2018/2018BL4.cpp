#include <bits/stdc++.h>
using namespace std;
long long n,a[1000001],i,s,d;
int main()
{
    ifstream fin("totuong.inp");
    ofstream fout("totuong.out");
   string n;
   getline(cin,n);
   for(i=0;i<=n.length();i++){
    //cout<<n[i]<<" ";
   if(n[i]&&n[i+1]=='w') {
        n[i] = 'b';
        n[i+1] = 'w';
        d+=1;
   }
    if(n[i]&&n[i+1]=='b') {
        n[i] = 'w';
        n[i+1] = 'b';
                d+=1;

   }
   }
   cout<<d;
    fin.close();
    fout.close();
    return 0;
}
