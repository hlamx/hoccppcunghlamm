#include <bits/stdc++.h>
using namespace std;
long long x,y,z,i,a[1000001],d,n,tam,j;
int main()
{
    ifstream fin("congthuc.inp");
    ofstream fout("congthuc.out");
    string s;
    fin>>s;
    n = s.length();
    for(i=0;i<n;i++){
        if(s[i]>='A'&&s[i]<='Z'){ //cout<<n[i]<<endl;
            if(i==n-1) d++;
            else {
                if(s[i+1]>='A'&&s[i+1]<='Z') d++;
                else {
                    long long a = s[i+1] - '0';
                    if(i+2<n && s[i+2]>='0'&&s[i+2]<='9')
                        a = a*10+s[i+2]-'0';
                    d+=a;
                }
            }
        }
    }
    for(i=0;i<n;i++){
        if(s[i]>='A'&&s[i]<='Z'){
            tam++;
            for(j=i+1;j<n;j++){
                if(s[j]==s[i]) s[j]='*';
            }
            }
        }

        fout<<tam<<endl<<d;
    fin.close();
    fout.close();
    return 0;
}
