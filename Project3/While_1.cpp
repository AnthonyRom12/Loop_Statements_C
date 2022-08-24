// This programm is created for beginners
// Calculation of the sum of squares of natural numbers v1.0

#include <iostream>

using namespace std;

int main() {
	//Upper sum limit, sum value, index variable:
	int n = 10, s = 0, k = 1;
	// Loop statement for sum calculation:
	while (k <= n) {
		// Increasing sum value:
		s = s + k * k;
		// Increase value (+1) to index variable:
		k++;
	}
	// Resualt:
	cout << "Sum squares from 1 to " << n << ": " << s << endl;
	return 0;
}