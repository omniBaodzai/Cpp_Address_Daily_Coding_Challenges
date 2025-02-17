/* 04: Các phép toán trên số nguyên */

#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a = 10;
    int b = 3;

    cout << "Tong: " << (a + b) << endl; // 13
    cout << "Hieu: " << (a - b) << endl; // 7
    cout << "Tich: " << (a * b) << endl; // 30
    cout << "Thuong: " << (a / b) << endl; // 3
    cout << "Phan du: " << (a % b) << endl; // 1

    return 0;
}
