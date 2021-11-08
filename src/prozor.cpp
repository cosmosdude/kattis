#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>
#include <cstring>
#include <numeric>
#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

void print(int x, int y, int size, vector<string> & grid) {
	if (x != -1 && y != -1){
		grid[y][x] = 
		grid[y][x+size] = 
		grid[y+size][x] = 
		grid[y+size][x+size] = '+';

		for(int i = x+1; i<x+size; i++) grid[y][i] = grid[y+size][i] = '-';
		for(int i = y+1; i<y+size; i++) grid[i][x] = grid[i][x+size] = '|';	
	}
	
	for(auto& row: grid) cout << row << endl;
}


int main() {
	
	int row, col, k;
	cin >> row >> col >> k;

	vector<string> grid(row);
	for(int i = 0; i < row; i++)  cin >> grid[i];

	int best_count = 0;
	int bx = 0, by = 0;

	int size = k-1;
	for(int y = 0; y <= row-k; y++) {
		for(int x = 0; x <= col-k; x++) {

			int count = 0;
			for(int yy = y+1; yy < y+k-1; yy++ )
				for(int xx = x+1; xx < x+k-1; xx++)
					if (grid[yy][xx] == '*') count++;

			if (count > best_count) {
				best_count = count;
				bx = x; by = y;
			}
		}
	}

	cout << best_count << endl;
	print(bx, by, size, grid);

	return 0;
}