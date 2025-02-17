/* 03: short, long, long long */

#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short s = 12034;
    long l = 2356786;
    long long ll = 3495960322455;

    cout << "short: " << s << "\n"; // 12034
    cout << "long: " << l << "\n"; // 2356786
    cout << "long long: " << ll << "\n"; // 3495960322455

    return 0;
}