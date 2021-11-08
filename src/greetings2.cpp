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

	int count = (str.length() - 2) * 2;
	cout << "h";
	for(; count; count--) cout << 'e';
	cout << "y" << endl;
}