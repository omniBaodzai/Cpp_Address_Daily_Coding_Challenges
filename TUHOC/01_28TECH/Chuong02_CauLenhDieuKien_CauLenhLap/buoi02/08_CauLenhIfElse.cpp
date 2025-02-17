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

    int n = 100;
    if (n < 200) {
        cout << "YES"; //Vì n = 100 < 200 (điều kiện đúng) => in ra: YES
    }
    else {
        cout << "NO";
    }

    return 0;
}