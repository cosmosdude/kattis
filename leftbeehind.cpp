#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;

int main() { 

	int sweet, sour;
	cin >> sweet >> sour;
	while(sweet || sour) {
		int diff = sweet - sour;

		if (sweet+sour == 13) {
			cout << "Never speak again." << endl;
		} else if (diff < 0) {
			cout << "Left beehind." << endl;
		} else if (diff == 0) {
			cout << "Undecided." << endl;
		} else {
			cout << "To the convention." << endl;
		}

		cin >> sweet >> sour;
	}
}

