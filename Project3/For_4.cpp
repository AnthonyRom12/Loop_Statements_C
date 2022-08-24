// This programm is created for beginners
// Calculation of the sum of squares of natural numbers v6.0

#include <iostream>

using namespace std;

int main() {
	int n, s = 0, k = 1;
	cout << "Enter upper sum limit: ";
	cin >> n;
	for (; ;) {
		s += k * k;
		k++;
		if (k > n) {
			break;
		}
	}
	cout << "Sum suqares from 1 to " << n << ": " << s << endl;
	return 0;
}