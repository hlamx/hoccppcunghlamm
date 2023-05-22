//câu 1 tin học trẻ ( có vài lần check map tới từ vị trí chatgpt ) 
#include <bits/stdc++.h>
using namespace std;
unsigned long long n,m,i,d;
// Hàm kiểm tra số có phải là số chính phương

bool sochinhphuong(long long num) {
    long long  sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

int main()
{
    ifstream fin("sohoc.inp");
    ofstream fout("sohoc.out");
    fin>>n;
     m = n;
     while (d < 3||!sochinhphuong(m)||(int)sqrt(m)%2==0) {
        m++;
        d = 0;

        for (i = 1; i <= m; ++i) {
            if (m % i == 0 ) {
                d++;
            }
        }
    }

    fout<<m;
    fin.close();
    fout.close();
    return 0;
}
