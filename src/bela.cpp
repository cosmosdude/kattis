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
	n *= 4;

	char dominant;
	cin >> dominant;

	int total = 0;
	for(long a, b; n; n--) {
		string str;
		cin >> str;
		int v = value(str[0], str[1] == dominant);
		//cerr << str << " " <<  (str[1] == dominant ? "D" : "!D") << " " << v << endl;
		total += v;
	}
	// cin.ignore();
	cout << total << endl;
}