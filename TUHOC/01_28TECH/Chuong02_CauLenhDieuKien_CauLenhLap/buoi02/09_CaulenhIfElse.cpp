/*
if (dieu kien) {
    câu lệnh sẽ được thực thi khi điều kiện đúng
}
else {
     câu lệnh sẽ được thực thi khi điều kiện sai
}
*/
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 300;
    if (n < 200) {
        cout << "YES"; 
    }
    else {
        cout << "NO"; //Vì n = 300 < 200 (điều kiện sai) => in ra: NO
    }

    return 0;
}