#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;



bool is_harshad(int n) {
	int divisor = 0;
	int k = n;
	while(k) {
		divisor += k % 10;
		k/=10;
	}
	return (n%divisor == 0);
}

int main() {
	int n;
	cin >> n;

	while(is_harshad(n) == 0) {
		n++;
	}
	cout << n << endl;
}