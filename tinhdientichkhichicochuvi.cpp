#include <bits/stdc++.h>
using namespace std;

int main() {
    double p;
    cout << "Nhap chu vi hinh chu nhat: ";
    cin >> p;

    double max_area = 0; // Khai báo biến max_area để lưu trữ diện tích lớn nhất và khởi tạo giá trị ban đầu là 0.
    for (double w = 0.1; w <= p/2; w += 0.1) {
    //Vòng lặp for để tính diện tích lớn nhất của hình chữ nhật. 
    //Biến w được khởi tạo bằng 0.1 và tăng lên 0.1 cho đến khi nó lớn hơn hoặc bằng nửa chu vi của hình chữ nhật. 
    //Biến l được tính toán bằng cách lấy nửa chu vi trừ đi chiều rộng w. 
    //Diện tích được tính bằng chiều dài l nhân với chiều rộng w.
    //Nếu diện tích này lớn hơn giá trị lưu trữ trong biến max_area, thì max_area sẽ được cập nhật với giá trị này.
        double l = p/2 - w;
        double area = l * w;
        if (area > max_area) {
            max_area = area;
        }
    }
        max_area = round(max_area * 10) / 10.0;
    cout<<fixed << setprecision(1)<<max_area << endl;
    return 0;
}
