#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	for(long a, b; n; n--) {

		cin >> a >> b;
		cout << a << " ";

		double n2 = b;
		n2 /= 2;

		n2 *= (1 + b);
		cout << ((long) n2) + b << endl;

	}
}