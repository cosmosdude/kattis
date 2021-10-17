#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	float price;
	cin >> price;

	int n;
	cin >> n;

	float total = 0;
	for(; n; n--) {
		float w, l;
		cin >> w >> l;

		total += (w*l)*price;
	}

	//cout << setprecision(6) << total << endl;
	printf("%0.6f\n", total);
}