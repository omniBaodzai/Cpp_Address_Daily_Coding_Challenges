/* 01: Toán tử gán = */

#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int n = 28;
	cout << "Gia tri cua n : " << n << endl;

	int m = n;
	cout << "Gia tri cua m : " << m << endl;

	int p = m;
	p = 56;
	cout << "Gia tri cua p : " << p << endl;
    
	return 0;
}