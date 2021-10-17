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

	int lpers = s.length() / 3;

	vector<string> strings;
	strings.push_back(s.substr(0, lpers));
	strings.push_back(s.substr(lpers, lpers));
	strings.push_back(s.substr(lpers*2));


	for(int i = 0; i < strings.size(); i++) {
		for(int j = 0; j < strings.size(); j++) {
			if (i == j) continue;
			if (strings[i] == strings[j]) {
				cout << strings[i] << endl;
				return 0;
			}
		}
	}
}