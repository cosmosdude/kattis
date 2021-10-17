#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;

#define loop(i, a, n) for(int i = a; i < n; i++)

int main() { 

	string a, b;
	cin >> a >> b;

	if (a == "0" || b == "0") {
		cout << "0" << endl;
	} else {
		int ac = 0, bc = 0;

		loop(i, 0, a.length()) {
			char c = a[i];
			if (c == 'S') ac++;
		}

		loop(i, 0, b.length()) {
			char c = b[i];
			if (c=='S') bc++;
		}

		loop(i, 0, ac*bc) cout << "S(";
		cout << "0";
		loop(i, 0, ac*bc) cout << ")";
		cout << "\n";
	}
}

// S(S(S(S(S(S(0))))))
// S(S(S(S(S(S(0))))))
