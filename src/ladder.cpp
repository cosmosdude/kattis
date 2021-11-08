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
	double h, v;
	cin >> h >> v;

	cout << ((long)ceil(h / sin(v * (M_PI/180)))) << endl;
}