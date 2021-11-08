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

	double x1, y1, x2, y2, p;

	cin >> x1;
	while(x1 != 0.f) {
		cin >> y1 >> x2 >> y2 >> p;
		double x12 = max(x1, x2) - min(x1, x2);
		double y12 = max(y1, y2) - min(y1, y2);
		printf("%0.10f\n", pow(pow(x12, p) + pow(y12, p), 1/p));

		cin >> x1;
	}
	

    return 0;
}