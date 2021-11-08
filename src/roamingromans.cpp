#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>


int main() {
	using namespace std;

	double n;
	cin >> n;

	double r = 1000.f * (5280.f/4854.f) * n;

	cout << (int)round(r) << endl;
	
	return 0;
}