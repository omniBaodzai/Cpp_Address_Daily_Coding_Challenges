// Kiểm tra xem n có phải là số chẵn hay không
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);

    int n;
    cout << "Nhap n: ";
    cin >> n;

    if(n % 2 == 0)
    {
        cout << "n la mot so chan";
    }

    return 0;
}