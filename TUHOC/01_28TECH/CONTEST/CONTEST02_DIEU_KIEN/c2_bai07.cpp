/*
=====================================================================================================================================================================
Bài 7: Số lớn nhất và nhỏ nhất:
Cho 2 số nguyên a và b. Bạn hãy tìm 2 số sau, số thứ 1 là số lớn nhất <= a mà
chia hết cho b, số thứ 2 là số nhỏ nhất >= a mà chia hết cho b. Chú ý các bạn
không được dùng vòng lặp.
=====================================================================================================================================================================
- Đầu vào:
1 dòng chứa 2 số a, b.
=====================================================================================================================================================================
- Ràng buộc: 
1 < = a, b <= 10^6
=====================================================================================================================================================================
- Đầu ra:
Dòng đầu tiên in ra số thứ 1 cần tìm. Dòng thứ 2 in ra số thứ 2 cần tìm.
=====================================================================================================================================================================
- Input 01:
25 5
=====================================================================================================================================================================
- Output 01:
20 25
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
    
    cout << a / b * b << " " << (a / b + 1) * b;
    
    return 0;
}