/* 01: Kiểm tra phạm vị giá trị của kiểu dữ liệu */

#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << INT_MIN << " -> " << INT_MAX << "\n"; // Trả về phạm vi lưu trữ của int
    cout << LLONG_MIN << " -> " << LLONG_MAX << "\n"; // Trả về phạm vi lưu trữ của long long

    return 0;
}
