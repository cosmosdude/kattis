#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>

using namespace std;

int value(char c, bool flag) {
	switch (c) {
		case 'A': return 11;
		case 'K': return 4;
		case 'Q': return 3;
		case 'J': return flag ? 20 : 2;
		case 'T': return 10;
		case '9': return flag ? 14 : 0;
		case '8': return 0;
		case '7': return 0;
		default: return 0;
	}
	return 0;
}

int main() {
	int n;
	cin >> n;
	
	int count = 0;
	int total = 0;
	while(n) {
		int a;
		cin >> a;

		if (a >= 0) {
			total += a;
			count ++;	
		}

		

		n --;

	}
	cout << (((float)total) / ((float)count)) << endl;
}