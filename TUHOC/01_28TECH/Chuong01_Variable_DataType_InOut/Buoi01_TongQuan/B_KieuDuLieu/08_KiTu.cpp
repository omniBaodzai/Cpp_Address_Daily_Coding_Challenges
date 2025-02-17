/* 08: Sử dụng cin.getline() */

#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char str[50];
    cout << "Nhap mot cau: ";

    cin.getline(str, 50); // Sử dụng getline() thì mới đọc được khoảng trắng
    cout << "Cau vua nhap la: " << str << endl;

    return 0;
}
