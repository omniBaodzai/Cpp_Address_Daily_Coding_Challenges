#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c = 'A';
    /*
    Lấy mã ASCII của A là số 65 để cộng với 10 = 75 và chuyển nó thành ký tự 'K'
    */
    cout << (char)(c + 10) << "\n"; 

    /*
    Chuyển về kiểu int trước khi cộng, sau đó chuyển lại thành ký tự
    */
    cout << (char)((int)c + 10);    

    return 0;
}
