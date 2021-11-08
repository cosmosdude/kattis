#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>

using namespace std;

int digit_total(int n) {
	int total = 0;
	while(n) {
		total += n % 10;
		n /= 10;
	}
	return total;
}

int main() {
	int N;

	cin >> N;
	while(N) {

		int p = 11;
		while(digit_total(p * N) != digit_total(N)) {
			p++;
		}
		cout << p << endl;


		cin >> N;
	}

	return 0;
}