/*
=====================================================================================================================================================================
Bài 11: Đề bài:
Cho số nguyên N hãy in ra kết quả của những phép toán sau:
- Dòng 1. In ra 2 lần số N,
- Dòng 2. In ra 10 lần số N, 
- Dòng 3. In ra kết quả của phép chia nguyên của N với 2,
- Dòng 4. In ra kết quả của phép chia lấy phần thập phân của N với 2, in ra 3 chữ
số phần thập phân.
=====================================================================================================================================================================
- Gợi ý: 
Khi nhân N với 10 có thể bị tràn, vì N tối đa là 10^9 => 10 * N = 10^10 vượt giới
hạn số int nên bạn cần xử lý tràn chỗ đó.
=====================================================================================================================================================================
- Input Format:
Dòng duy nhất chứa số nguyên dương N
=====================================================================================================================================================================
- Constraints:
1 <= N <= 10^9
=====================================================================================================================================================================
- Output Format:
In ra 4 dòng theo yêu cầu, mỗi kết quả cách nhau thêm 1 dòng trống, xem output để
rõ hơn yêu cầu.
=====================================================================================================================================================================
- Sample Input 0:
570
=====================================================================================================================================================================
- Sample Output 0:
1140

5700

285

285.000
=====================================================================================================================================================================
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    cout << 2 * n << "\n";
    cout << "\n";
    
    cout << (long long)10 * n << "\n";
    cout << "\n";

    cout << n / 2 << "\n";
    cout << "\n";

    cout << fixed << setprecision(3) << (double)n / 2 << "\n";

    return 0;
}
