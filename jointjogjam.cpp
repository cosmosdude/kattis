#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;



int main(void) {

	int xsa, ysa; cin >> xsa >> ysa;
	int xsb, ysb; cin >> xsb >> ysb;

	double a = sqrt(pow(xsb-xsa, 2) + pow(ysb-ysa,2));

	int xea, yea; cin >> xea >> yea;
	int xeb, yeb; cin >> xeb >> yeb;

	double b = sqrt(pow(xeb-xea,2) + pow(yeb-yea, 2));

	// cout << max(a, b) << endl;
	printf("%0.10f\n", max(a,b));

}