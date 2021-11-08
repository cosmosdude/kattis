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

	int count = 0;
	for(int a; n; n--) {

		cin >> a;
		if (a < 0) count ++;
	}

	cout << count << endl;
}