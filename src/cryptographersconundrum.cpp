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
	string s;
	cin >> s;

	int total = 0;
	for(int i = 0; i < s.length(); i+=3) {
		if (s[i] != 'P') total++;
		if (s[i+1] != 'E') total++;
		if (s[i+2] != 'R') total++;
	}
	cout << total << endl;

}