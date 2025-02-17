/* 04: Sử dụng toán tử với kiểu pair */

#include <iostream>
#include <utility>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    pair<string, int> p = make_pair("28tech", 30);
    pair<string, int> p1 = p;
    cout << p1.first << " " << p1.second;
    
    return 0;
}