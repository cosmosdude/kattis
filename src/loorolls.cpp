#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
	
	long l, n; 
	cin >> l >> n;

	int count = 1;
	while(l%n != 0) {
		n -= l%n; count ++;
	}

	cout << count << endl;

	return 0;
}