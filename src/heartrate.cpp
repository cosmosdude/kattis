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

	for(;n; n--) {
		double b, p;

		cin >> b >> p;

		double bpm = (60. * b) / p;
		double abpm = 60. / p;

		printf("%0.4f %0.4f %0.4f\n", bpm - abpm, bpm, bpm + abpm);

	}
}