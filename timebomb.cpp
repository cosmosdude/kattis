#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>

using namespace std;

map<string, int> digitmap;

void init_digit_map() {
	digitmap["**** ** ** ****"] = 0;
	digitmap["  *  *  *  *  *"] = 1;
	digitmap["***  *****  ***"] = 2;
	digitmap["***  ****  ****"] = 3;
	digitmap["* ** ****  *  *"] = 4;
	digitmap["****  ***  ****"] = 5;
	digitmap["****  **** ****"] = 6;
	digitmap["***  *  *  *  *"] = 7;
	digitmap["**** ***** ****"] = 8;
	digitmap["**** ****  ****"] = 9;
}

int get_digit(const string& s) {
	return digitmap.count(s) ? digitmap[s] : -1;
}

int digit_length(string & str) {
	int result = 0;
	int len = str.length();
	while(len >= 3) {
		result++;
		len = len-4;
	}
	return result;
}

int main() {
	init_digit_map();
	vector<string> digits;
	int digit_size = 0;
	for(int i = 0; i < 5; i++) {
		string line; getline(cin, line);
		if (i == 0) {
			// determine the length of the digits;
			digit_size = digit_length(line);
			digits.resize(digit_size);
		}

		for(int j = 0; j < digit_size; j++)
			digits[j] += line.substr((3*j)+(j), 3);
		
	}
	
	int number = 0;
	for(const string& d: digits) {
		int digit = get_digit(d);
		if (digit > -1) number = number*10 + digit; 
	}

	cout << ((number % 6 == 0) ? "BEER!!" : "BOOM!!") << endl;
	
	return 0;
}