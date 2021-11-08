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

	int minute;
	char ch;
	string status;

	int count = 0;
	int total = 0;
	bool s[26]; memset(s, false, sizeof(bool) * 26);
	int p[26]; memset(p, 0, sizeof(int) * 26);

	cin >> minute;
	while(minute != -1) {
		cin >> ch >> status;

		int index = ch - 'A';

		if (s[index] == false) {
			if (status[0] == 'r') {
				total += minute + (20 * p[index]);
				s[index] = true;
				count += 1;
			} else {
				p[index] += 1;
			}
		}
		cin >> minute;
	}

	cout << count << " " << total << endl;
}