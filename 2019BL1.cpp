#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, min_cost = INT_MAX; // khai báo biến n, x, y, min_cost
    cin >> n; // nhập số tờ giấy

    for (int i = 0; i <= n; i++) { // vòng lặp từ 0 đến n để tìm số tờ giấy phô 1 mặt
        x = i; // số tờ giấy phô 1 mặt là i
        y = n - i; // số tờ giấy phô 2 mặt là n - i
        int cost; // khai báo biến cost để lưu giá tiền
        // tính giá tiền cho số tờ giấy phô 1 mặt
        if (x <= 100) {
            cost = x * 250; // giá tiền 1 mặt là 250 đồng/tờ cho số tờ giấy <= 100
        } else {
            cost = x * 220; // giá tiền 1 mặt là 220 đồng/tờ cho số tờ giấy > 100
        }

        // tính giá tiền cho số tờ giấy phô 2 mặt
        if (y > 0) {
            if (y % 2 == 0) { // nếu số tờ giấy phô 2 mặt là số chẵn
                if (y <= 100) {
                    cost += y/2 * 300; // giá tiền 2 mặt là 300 đồng/tờ cho số tờ giấy <= 100
                } else {
                    cost += y/2 * 280; // giá tiền 2 mặt là 280 đồng/tờ cho số tờ giấy > 100
                }
            } else { // nếu số tờ giấy phô 2 mặt là số lẻ
                if (y <= 99) {
                    cost += (y+1)/2 * 300 + 250; // giá tiền 2 mặt là 300 đồng/tờ cho số tờ giấy <= 99, và giá tiền 1 mặt cho tờ giấy cuối cùng là 250 đồng
                } else {
                    cost += (y+1)/2 * 280; // giá tiền 2 mặt là 280 đồng/tờ cho số tờ giấy > 99
                }
            }
        }

        // tìm giá tiền nhỏ nhất
        if (cost < min_cost) {
            min_cost = cost;
        }
    }

    // in ra giá tiền nhỏ nhất
    cout << min_cost << endl;
    return 0;
}
