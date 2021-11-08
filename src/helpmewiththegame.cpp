#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>
#include <cstring>

using namespace std;

int type2int(char type) {
	switch(toupper(type)) {
		case 'K' : return 0;
		case 'Q' : return 1;
		case 'R' : return 2;
		case 'B' : return 3;
		case 'N' : return 4;
		default  : return 5;
	}
}

int towhite(char type, char col, char row) {
	return 0;
}

struct chesspiece {
	char type, col, row;
};
void print(chesspiece & cp) {
	if (tolower(cp.type) != 'p') cout << cp.type;
	cout << cp.col << cp.row;
}

void process() {
	vector<chesspiece> whites, blacks;

	string separator;
	// cin >> separator;
	getline(cin, separator);

	string line;
	for(int i = 0; i < 8; i++) {
		getline(cin, line);

		char row = (7-i) + '1';
		
		int col = 0;
		for(int j = 2; j < line.length(); j+=4) {
			char c = line[j];
			char colname = col + 'a';
			
			if (c != '.' && c != ':') {
				chesspiece cp {char(toupper(c)), colname, row};
				if (isupper(c)) whites.push_back(cp);
				else blacks.push_back(cp);
			}
			col += 1;
		}

		getline(cin, separator);
	}

	sort(
		whites.begin(), whites.end(),
		[] (chesspiece & a, chesspiece & b) -> bool {
			int t1 = type2int(a.type), t2 = type2int(b.type);
			if (t1 == t2) {
				if (a.row == b.row) return a.col < b.col;
				else return a.row < b.row;
			} else return t1 < t2;
		}
	);

	cout << "White: ";
	for(int i = 0; i < whites.size(); i++) {
		print(whites[i]);
		if (i+1 != whites.size())cout << ",";
	}
	cout << endl;

	sort(
		blacks.begin(), blacks.end(),
		[] (chesspiece & a, chesspiece & b) -> bool {
			int t1 = type2int(a.type), t2 = type2int(b.type);
			if (t1 == t2) {
				if (a.row == b.row) return a.col < b.col;
				else return a.row > b.row;
			} else return t1 < t2;
		}
	);

	cout << "Black: ";
	for(int i = 0; i < blacks.size(); i++) {
		print(blacks[i]);
		if (i+1 != blacks.size()) cout << ",";
	}
	cout << endl;
}

int main() {
	int n = 1;
	// cin >> n; cin.ignore();
	while(n--) process();
	return 0;
}