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
	cin >> str;

	vector<char> m;

	for(int i = 0; i < str.length(); i++) {
		char ch = str[i];

		for(const char s: m) {
			//cerr << ch << "&" << s << " ";
			if (s == ch) {
				cout << 0 << endl;
				return 0;
			}
		}
		//cerr << endl;
		m.push_back(ch);
		
	}
	cout << 1 << endl;

	
	return 0;
}