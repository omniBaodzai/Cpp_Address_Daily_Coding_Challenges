/*
========================================================================================================================================================================
Bài 10: Đề bài:
Khi bạn chia dư 1 số cho số nguyên N thì số dư của phép chia đó sẽ là các số từ
0 tới N - 1. Ví dụ khi bạn chia cho 5 thì phép chia có số dư có thể là 0, 1, 2,
3, 4. Bài toán này yêu cầu các bạn nhập 2 số a và b sau đó tìm phép dư khi chia
a cho b.
=> Điều này được gọi là định lý số dư (remainder theorem) trong toán học.
=====================================================================================================================================================================
- Note 1:
Nếu bạn chia một số nguyên a cho một số nguyên dương N và gọi kết quả là q và số
dư là r, thì ta có thể viết như sau:  a = qN + r
Trong đó, q là kết quả của phép chia (thương) và r là số dư. 
Số dư r sẽ luôn nằm trong khoảng từ 0 đến N - 1.
=====================================================================================================================================================================
Ví dụ 1: Giả sử bạn chia số 17 cho số 5. 
Thì kết quả của phép chia là 3 (thương) và số dư là 2. 
Ta có thể viết như sau:
17 = 3 × 5 + 2
Trong trường hợp này, số dư là 2, nằm trong khoảng từ 0 đến 5 - 1 = 4.
=====================================================================================================================================================================
Ví dụ 2:
Giả sử bạn chia số 23 cho số 7. 
Thì kết quả của phép chia là 3 (thương) và số dư là 2. 
Ta có thể viết như sau:
23 = 3 × 7 + 2
Trong trường hợp này, số dư là 2, nằm trong khoảng từ 0 đến 7 - 1 = 6.
=====================================================================================================================================================================
Lưu ý:
* Số dư luôn nhỏ hơn số chia.
* Số dư có thể bằng 0 nếu số bị chia chia hết cho số chia.
* Trong phép chia, số bị chia là số mà chúng ta muốn chia thành các phần bằng nhau.
Số chia là số mà chúng ta sử dụng để chia số bị chia. 
Ví dụ: Trong phép chia 17 ÷ 5, số 17 là số bị chia và số 5 là số chia.
========================================================================================================================================================================
- Input Format:
Dòng duy nhất chứa 2 số nguyên a, b, giữa a và b chứa 5 dấu cách
=====================================================================================================================================================================
- Constraints:
1 <= a, b <= 10^6;
=====================================================================================================================================================================
- Output Format:
In ra số dư khi chia a cho b
=====================================================================================================================================================================
- Sample Input 0:
806     605
=====================================================================================================================================================================
- Sample Output 0:
201
=====================================================================================================================================================================
*/
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    cout << a % b << endl;
    
    return 0;
}