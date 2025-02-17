#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    //Nhập một số in ra thứ tương ứng
    int n;
    cout << "Moi nhap so n: ";
    cin >> n;

    if (n == 1) {
        cout << "Chu nhat";
    }
    else if (n == 2) {
        cout << "Thu hai";
    }
    else if (n == 3) {
        cout << "Thu ba";
    }
    else if (n == 4) {
        cout << "Thu tu";
    }
    else if (n == 5) {
        cout << "Thu nam";
    }
    else if (n == 6) {
        cout << "Thu sau";
    }
    else if (n == 7) {
        cout << "Thu bay";
    }
    else {
        cout << "Du lieu khong hop le";
    }

    return 0;
}