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

int main() {
	
	int n, m, k;
	cin >> n >> m >> k;

	int current_color = 0;
	int* colors = new int[k]; 
	memset(colors, -1, k * sizeof(int));

	vector<string> lines(n);
	for(int i = 0 ; i < n; i++) cin >> lines[i];

	for(int col = 0; col < m; col++) {
		// current color start color
		int existing_color = -1;

		for(int row = 0; row < n; row++) {
			char c = lines[row][col];
			int i = c-'A';
			if (colors[i] != -1) {
				existing_color = colors[i];
				break;
			}
		}

		if(existing_color == -1) existing_color = current_color++;

		for(int row = 0; row < n; row++) {
			char c = lines[row][col];
			int i = c-'A';
			if(colors[i] < 0) colors[i] = existing_color;
		}
	}
	cout << current_color << endl;
	delete[] colors;
	return 0;
}