/* 05:Khi câu lệnh ruturn 0 được thực thi, thì chương trình sẽ kết thúc ngay lập tức */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << "Hello 1" << endl; // Hello 1
    return 0;
    
    cout << "Hello 2" << endl; // Các câu lệnh bên dưới return 0 sẽ không được thực thi
    return 0;
}
