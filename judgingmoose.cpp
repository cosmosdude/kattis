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

	int a, b;
	cin >> a >> b;

	int mn = min(a, b);
	int mx = max(a,b);

	if (mn == 0 && mx == 0) {
		cout << "Not a moose" << endl;
	}
	else cout << ((mn != mx) ? "Odd " : "Even ") << (mx*2) << endl;
}