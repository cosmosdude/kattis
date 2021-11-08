#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;

bool contains(string & s, string & sub) {
	bool result = false;

	if (s.length() < sub.length()) return false;


	for(int i = 0 ; i <= s.length() - sub.length(); i++) {
		string buffer;
		for(int j = i; j < i+sub.length(); j++) {
			buffer += s[j];
		}
		// cerr << buffer << " ";
		if (buffer == sub) return true;
	}
	// cerr << endl;

	return result;
}

int main() {

	string test = "FBI";
	vector<int> n;
	for(int i = 0; i < 5; i++){
		string s;
		getline(cin, s);
		if (contains(s, test)) n.push_back(i + 1);
	}
	if (n.size() == 0) cout << "HE GOT AWAY!" << endl;
	else {
		for(int i = 0 ; i < n.size(); i++) {
			cout << n[i];
			if (i + 1 != n.size()) cout << " ";
		}
		cout << endl;
	}
	//
}