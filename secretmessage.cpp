#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>

using namespace std;


void rotate_string()  {
	string str; cin >> str;

	int l = int(ceil(sqrt(str.length())));
	int total_len = l*l;

	vector<char> grid2rotate(total_len);
	vector<char> rotatedgrid(total_len);

	int i = 0;
	for(; i < str.length(); i++) grid2rotate[i] = str[i];
	for(; i < total_len; i++) grid2rotate[i] = '*';

	for(i = 0; i < total_len; i++) {
		int x = i%l;
		int y = i/l;
		// T(x,y) = (-y, x)
		int tx = (y * -1) + l-1;
		int ty = x;
		rotatedgrid[ty*l+tx] = grid2rotate[y*l+x];
	}

	for(i = 0; i < total_len; i++)
		if(rotatedgrid[i] != '*') 
			cout << rotatedgrid[i];
	cout << endl;
}

int main() {
	int n; cin >> n;
	cerr << "#output" << endl;
	while(n--) rotate_string();
	return 0;
}