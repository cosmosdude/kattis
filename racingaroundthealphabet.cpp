#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>

using namespace std;

constexpr double tau = M_PI*2;

int get_index(char c) {
	if (c == ' ') return 26;
	else if (c == '\'') return 27;
	else return c-'A';
}

double get_radian(char c) {
	return tau * double(get_index(c))/28.f;
}

double arclength(double angle, double diameter = 60.f) {
	return angle * diameter/2.f;
}

void process() {
	string aphorism; getline(cin, aphorism);

	double speed = 15.f;
	double time = 0.f;
	double prevrad = 0.f;
	char prev = ' ';

	for(int i = 0; i < aphorism.length(); i++) {
		char c = aphorism[i];
		double rad = get_radian(c);
		if (i != 0) {
			double aangle = abs(rad-prevrad);
			double bangle = abs(tau-aangle);
			double min_angle = min(aangle, bangle);
			double distance = arclength(min_angle);
			double t = distance/speed;
			time+=t;
		}
		prev = c;
		prevrad = rad;
	}
	time += double(aphorism.length());

	printf("%0.10f\n", time);
}

int main() {
	int n; cin >> n;
	cin.ignore();
	cerr << "#output" << endl;
	while(n--) process();
	return 0;
}