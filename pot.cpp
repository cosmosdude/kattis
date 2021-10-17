#include <string>
#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int main() {

	int n;
	cin >> n;

	int total = 0;
	for (; n; n--) {
		int v;

		cin >> v;
		int p = v%10;
		v = v/10;
		total += pow(v, p);
	}

	cout << total << endl;
	

}