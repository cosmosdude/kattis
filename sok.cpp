#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>

using namespace std;

int main() {

	array<double, 3> l;
	array<double, 3> r;
	for(int i = 0; i < 3; i++) cin >> l[i];
	for(int i = 0; i < 3; i++) cin >> r[i];
	double f = 999999.f;
	for(int i = 0; i < 3; i++) f = min(f, l[i]/r[i]);
	for(int i = 0; i < 3; i++)
		printf("%0.8f%c", l[i]-(r[i]*f), (i==2) ? '\n' : ' ');
	return 0;
}