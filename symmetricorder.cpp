#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;

void process(int n) {
	vector<string> names;

	while(n--) {
		string s; cin >> s;
		names.push_back(s);
	}

	int l = names.size();

	vector<string> sorted; sorted.resize(l);

	if (l%2 == 1) sorted[(l-1)/2] = names[l-1];

	if (l == 1) {
		cout << names[0] << endl;
		return;
	}	

	int s = 0; int r = l-1;
	for(int i = 0; i < l/2; i++) {
		sorted[s] = names[i*2];
		sorted[r] = names[(i*2)+1];
		s++; r--;
	}

	for(int i = 0; i < sorted.size(); i++) cout << sorted[i] << endl;

}

int main() {
	int n; cin >> n;
	int i = 1;
	while(n) {
		cout << "SET " << i++ << endl;
		process(n);
		cin >> n;
	}
	return 0;
}