#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c = 'A';
    cout << c + 10 << "\n"; // Lấy mã ASCII của A là số 65 để cộng với 10 = 75
    cout << (int)c + 10; // 75

    return 0;
}