#include <bits/stdc++.h>
using namespace std;
long long n,m,x,y,s;
int main()
{
    ifstream fin("catbanh.inp");
    ofstream fout("catbanh.out");
    fin>>n>>m;
  for(x=1;x<=n;x++){
      y=n-x;
    if(5*x+3*y==15*m) fout<<x;
  }
    fin.close();
    fout.close();
    return 0;
}
