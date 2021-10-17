#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>

using namespace std;

int digit_total(int value) {
	int total = 0;
	while(value) {
		total += value % 10;
		value /= 10;
	}
	return total;
}

int minimum(int l, int d, int x) {
	int y;
	for(int i = l; i <= d ;i++) {
		if (digit_total(i) == x) return i;
	}
	return y;
}

int maximum(int l, int d, int x) {
	int y;

	for(int i = d; i >= l ;i--) {
		if (digit_total(i) == x) return i;
	}

	return y;
}

int main() {
	int l, d, x;

	cin >> l >> d >> x;

	int n;
	int m;

	cout << minimum(l, d, x) << endl;
	cout << maximum(l, d, x) << endl;




	return 0;
}