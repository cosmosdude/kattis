#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;
int main() {
	double r, m, c;
	cin >> r >> m >> c;
	while(r != 0 && m!=0 && c!=0) {
		printf(
			"%0.10f %0.10f\n", 
			M_PI*pow(r,2),
			pow(r,2) * 4 * c/m
		);
		cin >> r >> m >> c;
	}

	return 0;
}