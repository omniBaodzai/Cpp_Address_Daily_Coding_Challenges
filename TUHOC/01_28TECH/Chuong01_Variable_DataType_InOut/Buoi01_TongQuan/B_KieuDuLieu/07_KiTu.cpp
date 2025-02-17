/* 07: Nhập và xuất chuỗi */

#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char str[20];
    cout << "Nhap chuoi ki tu: ";
    cin >> str;

    //Cin không nhận khoảng trắng, nên khi nhập có khoảng trắng thì chuỗi sẽ ngắt
    cout << "Chuoi ban vua nhap la: " << str << endl;

    return 0;
}
