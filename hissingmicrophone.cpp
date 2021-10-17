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

	char prev = ' ';
	for(const char& c: s) {
		if (prev == 's' && prev == c) {
			cout << "hiss" << endl;
			return 0;
		}
		prev = c;
	}	
	cout << "no hiss" << endl;
}