/* 02: Các kiểu khai báo pair */

#include <iostream>
#include <utility>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Cách 1 : Giá trị của first và second là mặc định
    pair<int, float> z;
    cout << z.first << " " << z.second << endl;
    
    // Cách 2: Giá trị của first là 20, second là 100
    pair<int, int> a = make_pair(20, 100);
    cout << a.first << " " << a.second << endl;

    // Cách 3: Giá trị của first là @, second là 40
    pair<char, int> b = {'@', 40};
    cout << b.first << " " << b.second << endl;

    // Cách 4: Giá trị của first là @, second là #
    pair<char, char> c('@', '#');
    cout << c.first << " " << c.second << endl;

    return 0;

}