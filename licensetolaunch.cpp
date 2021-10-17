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

	int n; cin >> n;

	int index = 0;
	int m; cin >> m;
	for(int i = 1; i < n; i++) {
		int a; cin >> a;

		if (a < m) {
			m = a;
			index = i;
		}

	}

	cout << index << endl;
	
}