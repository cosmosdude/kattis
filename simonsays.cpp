#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

bool has_prefix(std::string& str) {
	std::string prefix = "Simon says ";

	if (str.length() >= prefix.length()) {
		for(int i = 0; i < prefix.length(); i++) {
			if (prefix[i] != str[i]) return false;
		}
		return true;
	}
	return false;
}

std::string cut(std::string& str) {
	std::string prefix = "Simon says";

	return str.substr(prefix.length());
}


int main() {
	using namespace std;

	int n;
	cin >> n;
	cin.ignore();

	int count = 0;

	while(n) {
		//cout << "a1" << endl;
		string str;
		//cout << "a2" << endl;
		getline(cin, str);
		//cout << "a3" << endl;

		if (has_prefix(str)) {
			count += 1;
			cout << cut(str) << endl;
		}

		n --;
	}
	//if (count == 0) { cout << endl; }
}