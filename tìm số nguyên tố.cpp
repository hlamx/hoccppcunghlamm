#include <iostream>
using namespace std;

int main() {
    int m, n, k;
    cin >> m;
    cin >> n;
    k = 1;
    while (k < m) { //lặp lại khi th k < m
        int a = n, b = k, temp;
        while (b != 0) { // tìm ước chung lớn nhất 
            temp = a % b;
            a = b;
            b = temp;
        }
        if (a == 1) {
            cout << k << " ";
        } // nếu a == 1 thì cout<<k vì số nguyên tố là số không chia được cho số nào ngoài nó và số 1
        k++;
    }
    return 0;
}
