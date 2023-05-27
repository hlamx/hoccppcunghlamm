#include <bits/stdc++.h>
using namespace std;
long long n,i,f0,f1,fahihi;
int main()
{
    cin>>n;
    f0 = n-1;
    f1=n-2;
    fahihi = f0+f1;
    cout<<f0<<" | "<<f1<<" | "<<f0+f1<<endl;
     int fib1 = 0, fib2 = 1, sum = 0;
    for (int i = 1; i <= fahihi; i++) {
        sum += fib2;

        // Tính số Fibonacci tiếp theo
        int fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }
        cout << "Tong cua " << n << " so Fibonacci la: " << sum << endl;
}
