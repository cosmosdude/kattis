#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>

using namespace std;

int str2centi(string & str) {
	int centi = 0;
	for(int i = 0; i < str.length()-1; i++) {
		centi = centi*10 + str[i]-'0';
	}
	return centi;
}

void process() {
	int n; cin >> n;
	vector<int> r, b;
	while(n--) {
		string s; cin >> s;
		int centi = str2centi(s);
		if (s[s.length()-1] == 'R') r.push_back(centi);
		else b.push_back(centi);	
	}
	sort(r.rbegin(), r.rend());
	sort(b.rbegin(), b.rend());

	n = min(r.size(), b.size());

	int loop_length = 0;
	for(int i = 0; i < n; i++) {
		loop_length = max(loop_length-1, 0);
		loop_length += r[i] + b[i] - 1;
	}
	loop_length = max(loop_length-1, 0);
	cout << loop_length << endl;
}


int main() {
	int n; cin >> n;


	for(int i = 0; i < n; i++) {
		cout << "Case #" << i+1 << ": ";
		process();
	}

    return 0;
}