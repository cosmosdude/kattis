#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;


void rotate(string&s) {
	string ss = s;

	int l = sqrt(s.length());
	for(int i = 0; i < s.length(); i++) {
		int x = i % l;
		int y = i / l;

		int xp = y;
		int yp = (x * -1) + (l-1);
		ss[(yp * l) + xp] = s[(y*l) + x];
	}
	cout << ss << endl;
}


int main() {
	int n = 0;
	cin >> n;

	while(n) {
		string s;
		cin >> s;
		rotate(s);
		n--;
	}

}