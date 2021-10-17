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
	string str;
	cin >> str;

	int count = 0;
	for(int i = 0; i < 3; i++) {
		if (str[i] == '5')count++;
	}

	cout << (count == 3) << endl;
}