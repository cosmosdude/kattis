#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>


int main() {
	using namespace std;

	string str;

	//getline(cin, str);
	cin >> str;

	int t = 0, c = 0, g = 0;
	for(const char ch: str) {
		switch(ch) {
		case 'T':
			t += 1;
			break;
		case 'C': 
			c += 1;
			break;
		default:
			g += 1;
			break;
		}
	}

	int additional = min(min(t, c), g) * 7;

	cout << ((t*t) + (c*c) + (g*g) + additional) << endl;
	
	
	return 0;
}