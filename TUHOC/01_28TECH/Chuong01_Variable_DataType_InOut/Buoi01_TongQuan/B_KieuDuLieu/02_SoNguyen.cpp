/* 02: Kiểu dữ liệu số nguyên */

#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    signed int x = -10; // Số nguyên có dấu
    unsigned int y = 10; // Số nguyên không dấu

    cout << "So nguyen co dau: " << x << "\n"; // -10
    cout << "So nguyen khong dau: " << y << "\n"; // 10

    return 0;
}