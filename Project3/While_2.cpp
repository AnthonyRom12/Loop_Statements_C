// This programm is created for beginners
// Calculation of the sum of squares of natural numbers v2.0

#include <iostream>

using namespace std;

int main() {
	//Upper sum limit & sum value:
	int n, s = 0;
	cout << "Upper sum limit: ";
	cin >> n;
	//Loop statement for calculation:
	while (n) {
		// Increase sum value:
		s += n * n;
		//Decrease (-1) sum value:
		n--;
	}
	cout << "Sum squares: " << s << endl;
	return 0;
}