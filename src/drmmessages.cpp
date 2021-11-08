#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;

char ch(int value) {
	return (char)('A' + ((value) % 26) );
}

int value(char c) {
	return c - 'A';
}

char rotate(char a, char b) {
	int va = value(a);
	int vb = value(b);
	return ch(va + vb);
}

void rotate(string&s) {
	int total = 0;
	for(const char&c: s) total+=value(c);

	for(char&c: s) {
		c = ch(value(c) + total);
	}
}

void rotate(string& a, string& b) {
	for(int i = 0; i < a.length(); i++) {
		a[i] = ch(value(a[i]) + value(b[i]));
	}
}


int main() {
	
	string str;
	cin >> str;

	string a;
	string b;

	for(int i = 0; i < str.length() / 2; i++) a+=str[i];
	for(int i = str.length()/2; i < str.length(); i++) b+=str[i];

	rotate(a); rotate(b); rotate(a, b);
	cout << a << endl;
}