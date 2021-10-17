#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;



int main(void) {

	string s;
	cin >> s;

	vector<string> items;
	int p = 13 , k = 13, h = 13, t = 13;

	for(int i = 0; i < s.length(); i+=3) {
		string sstr = s.substr(i, 3);
		for(string&str: items) {
			if (sstr == str) {
				cout << "GRESKA" << endl;
				return 0;
			}
		}
		switch (sstr[0]) {
			case 'P': p--; break;
			case 'K': k--; break;
			case 'H': h--; break;
			default: t--; break;
		}

		items.push_back(sstr);
	}

	printf("%d %d %d %d\n", p, k, h, t);
}