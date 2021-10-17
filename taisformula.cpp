#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;


int main() {
	int n;
	cin >> n;

	double pt, pv;
	double total = 0.f;

	for(int i = 0.f; i < n; i++ ) {
		double t, v;
		cin >> t >> v;

		if (i != 0.f) {
			double dt = t - pt;
			double dv = (pv+v) / 2.f;
			total += (dv*dt)/1000.f;
		}

		pt = t; pv = v;

	}

	//cout << total << endl;
	printf("%0.6f\n" , total);
	
}