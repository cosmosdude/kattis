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
	string s;
	getline(cin, s);

	cout << "Thank you, ";
	bool was_space = true;
	for(int i = 0; i < s.length(); i++) {
		char c = s[i];
		if (was_space) {
			printf("%c", toupper(c));
			// cout << toupper(c);
			was_space = false;
		}
		else printf("%c", tolower(c));//cout << (char)tolower(c);

		if (c == ' ') was_space = true;
	}
	cout << ", and farewell!" << endl;
}