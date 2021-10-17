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
	int a[4];

	cin >> a[0] >> a[1] >> a[2] >> a[3];

	int lt, lr, lb, ll;

	lt = max(max(a[0], a[1]), max(a[2], a[3]));
	lr = min(min(a[0], a[1]), min(a[2], a[3]));

	for(int i = 0; i < 4; i++) {
		if (a[i] == lt) {
			a[i] = 0; 
			break;
		}
	}

	for(int i = 0; i < 4; i++) {
		if (a[i] == lr) {
			a[i] = 0; 
			break;
		}
	}

	lb = max(max(a[0], a[1]), max(a[2], a[3]));
	ll = min(min(a[0], a[1]), min(a[2], a[3]));

	cout << lb * lr << endl;

}