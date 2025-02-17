/* 05: Kiểu dữ liệu số thực */

#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    float f = 3.14f;         // Khai báo biến float
    double d = 3.14159;      // Khai báo biến double
    long double ld = 3.141592653589793238L;  // Khai báo biến long double

    cout << "Float: " << f << endl; //3.14
    cout << "Double: " << d << endl; // 3.14159
    cout << "Long Double: " << ld << endl; // 3.141592653589793238

    return 0;
}
