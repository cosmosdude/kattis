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

char et[28];
void init_table() {
	for(int i = 0; i < 26; i++) {
		et[i] = 'A'+i;
	}
	et[26] = '_';
	et[27] = '.';
}

int value(char c) {
	if (c == '_') return 26;
	if (c == '.') return 27;
	return c - 'A';
}

char ch(int value) {
	value = value%28;
	return et[value];
}

void encrypt(string & s, int rot) {
	for(int i = s.length()-1; i > -1; i--) {
		char c = s[i];
		int v = value(c);
		v += rot;

		char cc = ch(v);
		cout << cc;
	}
	cout << endl;


}


int main() {
	init_table();

	int n; cin >> n;
	while(n) {
		string s;
		cin >> s;

		encrypt(s, n);
		cin.ignore();
		cin >> n;
	}
	
}