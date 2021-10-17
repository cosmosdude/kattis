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

	bool stopped = true;
	long sec = 0;

	long prev = 0;
	while(n) {

		long s;
		cin >> s;

	
		if (stopped == false) sec += s - prev; 
		stopped = !stopped;
		prev = s;
		

		n--;
	}

	if (stopped) cout << sec << endl;
	else cout << "still running" << endl;

}