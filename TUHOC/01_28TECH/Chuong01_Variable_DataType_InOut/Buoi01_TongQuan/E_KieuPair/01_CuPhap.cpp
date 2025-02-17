/* 01: Cú pháp khai báo pair */

#include <iostream>
#include <utility>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /* Tạo ra một đối tượng để lưu trữ một giá trị thuộc kiểu số nguyên và một
    giá trị thuộc kiểu chuỗi */
    pair<int, string> myPair;

    // Thuộc tính first dùng để lưu giá trị đầu tiên
    myPair.first = 10;
    // Thuộc tính second dùng để lưu giá trị thứ hai
    myPair.second = "Huynh Le Bao";

    // Truy xuất giá trị đầu tiên thông qua thuộc tính first
    cout << myPair.first << "\n";
    // Truy xuất giá trị thứ hai thông qua thuộc tính second
    cout << myPair.second << "\n";

    return 0;
}