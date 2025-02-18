/*
=====================================================================================================================================================================
Bài 1: Tính toán giá trị của biểu thức:
Cho biểu thức A(x) = x^3 + 3x^2 + x + 1 Với giá trị của x được nhập từ bàn phím,
tính và in ra giá trị của biểu thức trên
=====================================================================================================================================================================
- Đầu vào:
Số nguyên x
=====================================================================================================================================================================
- Ràng buộc: 
-10^5 ≤ x ≤ 10^5
=====================================================================================================================================================================
- Đầu ra:
In ra kết quả cùa biểu thức
=====================================================================================================================================================================
- Input 01:
2
=====================================================================================================================================================================
- Output 01:
23
=====================================================================================================================================================================
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x; cin >> x;

    //cout << 1ll * x * x * x + 3 * 1ll * x * x + x + 1;
    cout << (long long)pow(x, 3) + 3 * (long long)pow(x, 2) + x + 1;

    return 0;
}
