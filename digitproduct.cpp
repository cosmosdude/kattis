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

	int x; cin >> x;
	while(x > 9) {

		int y = 1;
		while(x != 0) {
			if (x%10 != 0) y *= x%10;
			x/=10;
		}

		x = y;
	}

	cout << x << endl;
	

    return 0;
}