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

	int total = 1;
	for(; n; n--) {
		int v;
		cin >> v;
		total += v - 1;
	}

	cout << total << endl;
	

}