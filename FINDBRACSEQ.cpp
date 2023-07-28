#include <bits/stdc++.h>
using namespace std;
long long a[100000000],b,t,m,i,d;
int main()
{
    ifstream fin("TESTCASE.inp");
    ofstream fout("TESTCASE.out");
    string tam,a;
   fin>>a;
    for(i=0;i<=a.length();i++){
        if(a[i]=='('&&a[i+1]=='('){
               if(a[i+2]==')') {
             swap(a[i+1],a[i+2]); // khúc này check var 
           }
        }
    }
     for(i=0;i<=a.length();i++){
       if((a[i]=='('&&a[i+1]==')')||(a[i]==')'&&a[i+1]=='(')){
            d+=2;
            a[i]='*';
            a[i+1]='*';
       }
       //fout<<a[i]<<" "; // có thể fout cái này để xem cách hoạt động
    }
    fout<<d;
    fin.close();
    fout.close();
    return 0;
}
