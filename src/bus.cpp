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

	int k; cin >> k;
	while(k) { k--;
		int n; cin >> n;

		double fn = 0;
		for (int i = 0; i < n; i++) {
			fn = (fn + 0.5) * 2.f;
		}

		cout << (long)fn << endl;
	}
	
	
}