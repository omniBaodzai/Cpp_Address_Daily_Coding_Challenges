// Kiểm tra n chia hết cho 5 và n là số chẵn
#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    // Cách 1
    int n;
    cout << "Nhap n: ";
    cin >> n;

    if((n % 5 == 0) && (n % 2 == 0)) {
        cout << "n chia het cho 5 va n la so chan";
    }
    else {
        cout << "n khong chia het cho 5 va n khong la so chan";
    }

    cout << "\n";
    
    // Cách 2
    int m;
    cout << "Nhap m: ";
    cin >> m;

    if(m % 5 == 0) {
        if (m % 2 == 0) {
            cout << "m chia het cho 5 va m la so chan";
        }
    }
    else {
        cout << "m khong chia het cho 5 va m khong la so chan";
    }

    return 0;
}