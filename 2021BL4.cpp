#include <bits/stdc++.h>
using namespace std;
long long hihi = 1e6+1, a[hihi], b[hihi], n, i, j, k, kq, m, s, minn = 1e15, maxx, dem;

int main() {
    ifstream fin("dieuche.inp"); // Mở file input
    ofstream fout("dieuche.out"); // Mở file output
    fin >> n >> k; // Đọc giá trị n và k từ file input

    for (i = 1; i <= n; i++) {
        fin >> a[i]; // Đọc dữ liệu vào mảng a từ file input
    }

    sort(a + 1, a + n + 1); // Sắp xếp mảng a theo thứ tự tăng dần

    while (!(i == n && j > m) || !(j == m && i > n)) { // Vòng lặp chạy cho đến khi thỏa mãn điều kiện đủ
        s = 0;
        minn = 1e15;
        maxx; // Tham số chưa được khởi tạo
        dem;

        while (dem < k && (i <= n || j <= m)) {
            long long x; // Biến x chưa được khai báo
            if (i > n) {
                x = b[j];
                j++;
            }
            else if (j > m) {
                x = b[i];
                i++;
            }
            else if (a[i] < b[j]) {
                x = a[i];
                i++;
            }
            else {
                x = b[j];
                j++;
            }

            s += x;
            maxx = min(maxx, x);
            minn = min(minn, x);
            dem++;
        }

        kq += maxx - minn;
        m++;
        b[m] = s;
    }

    fout << kq; // Ghi kết quả vào file output
    fin.close(); // Đóng file input
    fout.close(); // Đóng file output
    return 0;
}
