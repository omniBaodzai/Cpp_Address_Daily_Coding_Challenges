// Kiểm tra xem n có phải có chữ số tận cùng là 3 hay không? Nếu có thì in ra 'OK'
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 123;
    if(n % 10 == 3) {
        cout << "OK";
    }

    return 0;
}