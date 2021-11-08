#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	string str;

	cin >> str;


	int count = 0;

	int t1 = 0;
	int t2 = 0;
	for(int i = 0; i < str.length(); i++) {

		char c = str[i];
		if (c == ';' || i + 1 == str.length()) {

			if (i + 1 == str.length()) {
				int v = c - '0';
				t2 = t2*10 + v;
			}

			if (t1 == 0) {
				count ++;
				cerr << t1 << " " <<  t2 << " " << 1 << endl;
			}
			else {
				count += abs(t1-t2) + 1; 
				cerr << t1 << " " <<  t2 << " " << abs(t1-t2) + 1 << endl;
			}

			

			t1 = 0;
			t2 = 0;
		} else if (c == '-') {
			t1 = t2;
			t2 = 0;
		} else {
			int v = c - '0';
			t2 = t2*10 + v;
		}
	}

	cout << count << endl;
}