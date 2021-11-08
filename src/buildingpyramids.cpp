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
	
	long b; cin >> b;

	int h = 0;

	for(int i = 1; true; i+=2) {
		long sq = pow(i, 2);
		if (b >= sq) {
			b-=sq;
			h += 1;
		} else break;
	}

	cout << h << endl;

	return 0;
}