// This programm is created for beginners
// Calculation of the sum of squares of natural numbers v3.0

#include <iostream>

using namespace std;

int main() {
	// Variable for upper sum limit, variable for sum value and index, variable for statement:
	int n, s = 0, k;
	cout << "Enter upper sum limit: ";
	cin >> n;
	// Statement for calculation:
	for (k = 1; k <= n; k++) {
		// Increase sum:
		s += k * k;
	}
	cout << "Sum suqares form 1 to " << n << ": " << endl;
	return 0;
}