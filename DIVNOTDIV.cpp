#include <bits/stdc++.h>
using namespace std;
long long a,b,n,t,m,i;
int main()
{
    ifstream fin("TESTCASE.inp");
    ofstream fout("TESTCASE.out");
    fin>>t;
    while(t--){
    fin>>a>>b>>n;
        for(i=1;i<=n;i++){
            m=a*i;
            if(m%a==0&&m%b!=0&&m>n){
                fout<<m<<endl;
                break;
            }
            else{
                if(i==n&&!(m%a==0&&m%b!=0)) fout<<"-1"<<endl;
            }
        }
    }
    fin.close();
    fout.close();
    return 0;
}
