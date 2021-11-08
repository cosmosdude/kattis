#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;

bool is_vowel(char c){
	switch(c) {
		case 'a': case 'e': case 'i':
		case 'o': case 'u': return true;
	}
	return false;
}

char vowel(char a, char b, char c) {
	// cerr << "input:" << a << b << c << endl;
	if (is_vowel(a) && a == c && b == 'p') {
		return a;
	} else {
		return 0;
	}
}



int main() { 
	string s; getline(cin, s);
	int i = 0;
	for(; i < ((int)s.length()) - 2; i++) {
		char v = vowel(s[i], s[i+1], s[i+2]);
		cout << s[i];
		if (v) i+=2;
	}
	for(; i < s.length(); i++) cout << s[i];
	cout << endl;
}

