#include <bits/stdc++.h>
long long x,y,z
using namespace std;
int main() {
    for( x=1; x<=20; x++)
        for ( y=1;y<=33;y++)
            for ( z=3;z<=100;z++)
                if ( (x+y+z==100) && (x*5+y*3+z/3==100) )
                {
                    cout<<"Trau dung "<<x<<" ";
                    cout<<"Trau nam "<<y<<" ";
                    cout<<"Trau gia "<<z<<endl;
                }
