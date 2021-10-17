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

	string s;
	cin >> s;

	char prev = 0;
	string n;
	for(const char&c: s) {
		if(prev == 0 || prev != c) {
			n += c;
			prev = c;
		}
	}
	cout << n << endl;
}