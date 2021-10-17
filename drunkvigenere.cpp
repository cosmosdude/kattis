#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;

char ch(int v) {
	v = v % 26;
	if (v < 0) v += 26;
	return (char)(v + 'A');
}

int value(char c) {
	return c - 'A';
}

int main() {

	string c, k;
	cin >> c >> k;

	for(int i = 0; i < c.length(); i++) {
		if (i % 2 == 0) {
			cout << ch(value(c[i]) - value(k[i]));
		} else {
			cout << ch(value(c[i]) + value(k[i]));
		}
	}
	cout << endl;
	

	
}