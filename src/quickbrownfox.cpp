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
	int n; cin >> n;

	const int l = 26;
	int a[26];

	cin.ignore();
	while(n) { n--;
		memset(a, 0, sizeof(int) * l);

		string s; getline(cin, s);
		for(int i = 0; i < s.length(); i++) {
			char c = s[i];
			if (isalpha(c)) {
				c = tolower(c);
				int index = c - 'a';
				a[index] += 1;
			}
		}

		string missing;
		for(int i = 0; i < 26; i++) {
			if (a[i] == 0) {
				missing += (char)(i + 'a');
			}
		}
		if (missing.length()) cout << "missing " << missing << endl;
		else cout << "pangram" << endl;

	}
}