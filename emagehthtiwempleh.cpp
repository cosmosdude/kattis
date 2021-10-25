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

char grid[64];
void init_board() {
	memset(grid, ' ', 64);
}

void print_board() {
	string line = "+---+---+---+---+---+---+---+---+";

	cout << line << endl;
	for(int i = 0; i < 64; i++) {
		int x = i%8;
		int y = i/8;
		if (x == 0) cout << '|';

		char rect_color = '.';
		if (y % 2 == 0) rect_color = (x%2 == 0) ? '.' : ':';
		else rect_color = (x%2 == 0) ? ':' : '.';

		cout << rect_color;
		cout << ((grid[i] == ' ') ? rect_color : grid[i] );
		cout << rect_color;
		cout << '|';

		if (i%8 == 7)cout << endl << line << endl;
	}
}

bool iscolchar(char c) {
	return (c >= 'a' & c <= 'h');
}

int main() {
	init_board();

	string w, b;
	getline(cin, w);
	getline(cin, b);


	// white
	if (w.length() > 7) {
		for(int i = 7; i<w.length();) {
			char type = w[i];
			// a-h
			char col;
			// 1-8
			char row;

			// col char mean, it is pawn
			if (iscolchar(type)) {
				col = type;
				type = 'P';
				row = w[i+1];
				i+= 3;
			} else {
				col = w[i+1];
				row = w[i+2];
				i+=4;
			}

			char piece = toupper(type);
			int x = col-'a';
			int y = 7 - (row-'1');

			grid[y*8 + x] = piece;
		}
	}

	if (b.length() > 7) {
		for(int i = 7; i<b.length();) {
			char type = b[i];
			// a-h
			char col;
			// 1-8
			char row;

			// col char mean, it is pawn
			if (iscolchar(type)) {
				col = type;
				type = 'P';
				row = b[i+1];
				i+= 3;
			} else {
				col = b[i+1];
				row = b[i+2];
				i+=4;
			}

			char piece = tolower(type);
			int x = col-'a';
			int y = 7 - (row-'1');

			grid[y*8 + x] = piece;
		}
	}

	print_board();
	


	return 0;
}