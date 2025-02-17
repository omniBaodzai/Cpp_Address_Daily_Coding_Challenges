/* 02: Không sử dụng không gian tên std */

#include <iostream>

int main() {
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::cout << "Hello World!!!"; // Hello World!!!

    return 0;
}