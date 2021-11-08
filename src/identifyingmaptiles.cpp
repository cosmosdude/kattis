#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;



int main() { 
	
	string s; cin >> s;

	int zoomlvl = s.length();

	cout << zoomlvl << " ";
	
	int x = 0;

	int w = pow(2, zoomlvl);
	int h = w;

	for(int i = 0; i < s.length(); i++) {
		char c = s[i];
		if (c == '1' || c == '3') {
			x += w/2;
		}
		w = w/2;
	}
	int y = 0;
	for(int i = 0; i < s.length(); i++) {
		char c = s[i];
		if (c == '2' || c == '3') {
			y += h/2;
		}
		h = h/2;
	}

	cout << x << " ";
	cout << y << endl;


}

