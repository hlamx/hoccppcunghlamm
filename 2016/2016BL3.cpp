#include <bits/stdc++.h>
using namespace std;
long long x,y,z,i,a[1000001],d,n,tam,j,d1,d2;
int main()
{
    ifstream fin("trochoi.inp");
    ofstream fout("trochoi.out");
    string s;
    fin>>s;
     n = s.length()-1;
     for(i=0;i<n;i++)
        if(s[i]=='B'&&s[i+1]=='G'||s[i]=='G'&&s[i+1]=='B'){
            d1++;
            i++;
        }
        if((s[0]=='B'&&s[n]=='G')||(s[0] == 'G'&&s[n]=='B')){
            d2=1;
            for(i=1;i<n-1;i++)
        if(s[i]=='B'&&s[i+1]=='G'||s[i]=='G'&&s[i+1]=='B'){
            d2++;
            i++;
        }
        }
    fout<<max(d1,d2);
    fin.close();
    fout.close();
    return 0;
}
/*
 n = s.length();
       for(i=0;i<=n;i++){
            //fout<<s[i]<<" ";
            if(s[i]==s[i+1]&&s[i+1]!=s[i+2]&&s[i]!=s[i+2]) {
                    tam = s[i];
                    s[i] = s[i+1];
                    s[i+1] = s[i];
             //       fout<<s[i]<<" ";
            }
       }
       for(i=0;i<=n;i++){
           fout<<s[i]<<" ";
            //if(s[i]!=s[i+1]) {d+=1;i++;}
       }
       fout<<d;*/
