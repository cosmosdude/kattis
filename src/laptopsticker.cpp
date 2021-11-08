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

	int wc, hc, ws, hs;
	cin >> wc >> hc >> ws >> hs;

	cout << ((ws <= wc - 2) && (hs <= hc - 2)) << endl;


	return 0;
}