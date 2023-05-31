#include <bits/stdc++.h>
using namespace std;
long long a[1000001],b,c,i,tam,hihi,s,n,r,d1,d2,d3;
int main()
{
    ifstream fin("chiecban.inp");
    ofstream fout("chiecban.out");
    fin>>n;
    for(i=1;i<=n;i++) fin>>a[i];
    for(i=1;i<=n;i++){
        if(a[i]==3) d3+=1;
        if(a[i]==2) d2+=1;
        if(a[i]==1) d1+=1;
    }
    if(d2>=d1){
      s = d1+(d2-d1);
    }
    else {
        s = d2;
       d1=d1-d2;
       s+=d1/3;
       if(d1%3>0) s++;
    }
    fout<<d3+s;
    fin.close();
    fout.close();
    return 0;
}
