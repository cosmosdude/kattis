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

	int n;
	cin >> n;
	while(n) {

		double x, v, angle, h1, h2;
		cin >> v >> angle >> x >> h1 >> h2;

		h1++; h2--;
		double y = get_y(x, v, angle);

		cout << ((y > h1 && y < h2) ? "Safe" : "Not Safe") << endl;
		n--;
	}

}