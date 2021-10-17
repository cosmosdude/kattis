#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;

bool string_contains(vector<string> & arr, string b) {
	for(string & test: arr) if (test == b) return true;
	return false;
}


int main() {
	int n, m;
	cin >> n >> m;

	vector<string> parts;

	// cerr << string_contains(parts, "cc") << endl;
	// cerr << string_contains(parts, "dd") << endl;

	int day = -1;
	for(int i = 0; i < m; i++) {
		
		string p;
		cin >> p;
		cerr << p << " ";
		if (!string_contains(parts, p)) {
			cerr << "not[in list] ";
			if (parts.size() < n) {
				cerr << "[avail]:adding ";
				parts.push_back(p);
				if (parts.size() == n) {
					day = i;
					cerr << "[size]:full day_marked:" << (i + 1) << endl;
				} else {
					cerr << "[size]:not_full continuing" << endl;
				}
			} else { cerr << "[full]:skipping " << endl;; }
		} else { cerr << "[in list]" << endl; }
	}
	if (day == -1) cout << "paradox avoided" << endl;
	if (day != -1) cout << (day+1) << endl;

}