#include <bits/stdc++.h>
using namespace std;
long long a,b,c,i,tam,hihi,s,t,r,d;
int main()
{
    ifstream fin("muasua.inp");
    ofstream fout("muasua.out");
    fin>>a>>b>>c;
    while(a>=b){
        d=a/b;
        a=a%b;
        s+=d;
        a+=d*c;
    }
    fout<<s;
    fin.close();
    fout.close();
    return 0;
}
/*
 sotiendu = a%b;
    solitmuaduoc = a/b;
    long long test = solitmuaduoc;
    hihi = sotiendu+solitmuaduoc;
    sotienbanduoc = test * c;
    //cout<<sotiendu<<" "<<solitmuaduoc<<" "<<sotienbanduoc<<" "<<hihi<<" "<<endl;
    long long tam2 = hihi/b;
    test = tam2;
    solitmuaduoc+=1;
    sotienbanduoc = test * c;
    sotiendu += sotienbanduoc;
    solitmuaduoc+=1;*/
