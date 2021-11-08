#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;



int add(string &number) {
	bool last_part = false;
	int a = 0, b = 0;
	for(const char& c: number) {
		if (c == '+') {
			last_part = true;
			continue;
		}
		if (last_part) {
			a = (a * 10) + (c - '0');
		} else {
			b = (b * 10) + (c - '0');
		}
	}
	return a + b;
}

int main() {
	int n;
	cin >> n;

	while(n) {
		string s;
		cin >> s;

		if (s == "P=NP") {
			cout << "skipped" << endl;
		} else {
			cout << add(s) << endl;
		}


		n--;
	}
}