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
	getline(cin, s);

	double total = (double)s.length();

	double w = 0, l = 0, u = 0, sym = 0;
	for(const char & c: s) {
		if (c == '_') w += 1;
		else if (islower(c)) l+=1;
		else if (isupper(c)) u+=1;
		else sym += 1;
	}

	printf("%0.16f\n", w/total);
	printf("%0.16f\n", l/total);
	printf("%0.16f\n", u/total);
	printf("%0.16f\n", sym/total);
}