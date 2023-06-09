#include <bits/stdc++.h>
using namespace std;
long long x,n,m,i,d,s;
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
long long bauocbenhat(long long n) {
    for (long long i = sqrt(n); ; i++) {
        if (isPrime(i)) {
            return i * i;
        }
    }
}
int main()
{
    ifstream fin("sohoc.inp");
    ofstream fout("sohoc.out");
    fin>>n;

    cout<<bauocbenhat(n);
    fin.close();
    fout.close();
    return 0;
}
