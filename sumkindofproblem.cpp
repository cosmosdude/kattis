#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>
#include <cstring>

using namespace std;

int sn(double n) {
	double n2 = n/2.f;
	return (int)((1+n) * n2);
}

int sodd(int n) {
	return n*n;
}

int seven(int n) {
	return (n*n)+n;
}

int main() {
	int p; cin >> p;

	while(p) { p--;
		int k, n;
		cin >> k >> n;
		cout << k << " ";
		cout << sn(n) << " ";
		cout << sodd(n) << " ";
		cout << seven(n) << " ";
		cout << endl;
	}
}