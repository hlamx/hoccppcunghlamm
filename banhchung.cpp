//bai 3 tin hoc tre
//tu 12h10 -> 12h41
#include <bits/stdc++.h>
using namespace std;
long long a[1000001],n,i,m,tam,s,t;
int main()
{
    ifstream fin("banhchung.inp");
    ofstream fout("banhchung.out");
    // nhập n,m lần lượt là
    //n = thể tích nồi bánh
    //m là số bánh
    fin>>n>>m;
    //chạy dòng for để nhập v[i]
    //v[i] là thể tích bánh
    for(i=1;i<=m;i++) fin>>a[i];
    //sort v[i] từ bé đến lớn
    sort(a+1,a+m+1);
    for(i=1;i<=m;i++){
    // xét trường hợp tổng còn nhỏ hơn n thì ta cộng cho v[i]
//        if(s<=n) s+=v[i];
        if(a[i]+a[i+1]<=n||a[i]+a[i-1]==n||a[i]==n) {s = a[i] + a[i+1];}
        // xét trường hợp tổng lớn hơn n thì ta trừ cho v[i]
  //      if(s>n) s-=v[i];
    }
    if((a[1]+a[m]<=n)&&(a[1]+a[m]>=s)) s =a[1]+a[m];
    cout<<a[m];
    fout<<s;
    fin.close();
    fout.close();
    return 0;
}
