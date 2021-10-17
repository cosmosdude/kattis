#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

double get_t(double x, double v, double angle) {
	return x / (v * cos(angle));
}

double get_y(double x, double v, double angleInDeg) {
	const double g = 9.81;
	double a = angleInDeg * M_PI / 180.f;
	double t = get_t(x, v, a);
	return (v * t * sin (a)) - (0.5 * g * pow(t, 2));
}

int main() {
	using namespace std;

	int t;
	cin >> t;

	bool stopped = true;
	long sec = 0;

	long prev = 0;

	while(t) {

		int prev = 0;
		int notfrom = 0;
		int n;
		cin >> n;
		while(n) {
			if (prev) {
				if (n > (2*prev)) {
					notfrom += n - 2*prev;	
				}
				prev = n;
			} else prev = n;
			cin >> n;
		}
		
		t--;
		cout << notfrom << endl;
	}


}