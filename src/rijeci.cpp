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


int main() {
	int n; cin >> n;

	int a = 1, b = 0;
	while(n) { n--;
		int new_b = a;
		a = b;
		b += new_b;
	}
	cout << a << " " << b << endl;
}