#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;


int main() {
	int x, y, n;
	cin >> x >> y >> n;

	for(int a = 1; a<= n; a++) {
		if ( (a % x == 0) && (a % y) == 0) {
			cout << "FizzBuzz" << endl;
		} else if (a % x == 0) {
			cout << "Fizz" << endl;
		} else if (a % y == 0) {
			cout << "Buzz" << endl;
		} else {
			cout << a << endl;
		}
	}
}