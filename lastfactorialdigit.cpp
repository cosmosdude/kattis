#include <string>
#include <iostream>
#include <array>
#include <cmath>

using namespace std;


long factorial(long n) {
	int value = 1;
	for(; n; n--) {
		value *= n;
	}
	return value;
}

int main() {

	int n;
	cin >> n;
	for(; n; n--) {
		long v;
		cin >> v;
		if (v < 5) cout << factorial(v) % 10 << endl;
		else cout << 0 << endl;
	}
	

}