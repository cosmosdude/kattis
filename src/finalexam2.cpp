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
	int n = 0;
	cin >> n;

	int mark = 0;
	char prev = 0;
	while(n) {
		char c;
		cin >> c;
		if (c == prev) mark ++;
		prev = c;
		n--;
	}
	cout << mark << endl;
}