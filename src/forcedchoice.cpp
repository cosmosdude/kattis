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
	int c, s, n;
	cin >> c >> s >> n;

	cin.ignore();
	while(n) {

		int k = 0;
		cin >> k;

		bool keep = false;
		while(k) {
			int v;
			cin >> v;
			if (v == s) {
				keep = true;
			}
			k--;
		}
		cin.ignore();
		cout << ((keep) ? "KEEP" : "REMOVE") << endl;
		n--;
	}
}