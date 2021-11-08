#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>
#include <cstring>

using namespace std;



int main() {
	int r, c;
	int zr, zc;

	cin >> r >> c;
	cin >> zr >> zc;

	for(int i = 0; i < r; i++) {
		string s;
		for(int j = 0; j < c; j++) {
			char c; cin >> c;

			for(int k = 0; k < zc; k++) {
				s += c;
			}
		}

		for(int j = 0; j < zr; j++) {
			cout << s << endl;
		}
	}
}