#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Kiểm tra n có phải là số chẵn
    int n = 500;
    if ((n % 2) == 0) {
        cout << "n la so chan";
    }

    return 0;
}