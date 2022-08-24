// This programm is created for beginners
// Calculation of the sum of squares of natural numbers v4.0

#include <iostream>

using namespace std;

int main() {
	int n, s, k;
	cout << "Enter upper sum limit: ";
	cin >> n;
	for (k = 1, s = 0; k <= n; s += k * k, k++) {
		cout << "Sum suqares form 1 to " << n << ": " << s << endl;
	}
	return 0;
}