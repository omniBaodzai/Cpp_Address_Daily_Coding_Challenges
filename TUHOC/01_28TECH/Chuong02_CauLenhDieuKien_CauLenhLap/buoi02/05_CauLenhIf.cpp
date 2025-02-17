#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Kiểm tra một số chia hết cho 5
    int n = 500;
    if ((n % 5) == 0) {
        cout << "n là mot so chia het cho 5";
    }

    return 0;
}