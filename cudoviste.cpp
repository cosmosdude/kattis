#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;




int main() {
	int w, h;
	cin >> w >> h;

	vector<string> plane;

	for(int i = 0; i < w; i++) {
		string s;
		cin >> s;
		plane.push_back(s);
	}
	
	array<int, 5> result {0, 0, 0, 0, 0};

	string area = "aaaa";
	for(int y = 0; y < (w-1); y++ ) {
		for(int x = 0; x < (h-1); x++) {
			string& a = plane.at(y);
			string& b = plane.at(y+1);
			area[0] = a[x];
			area[1] = a[x+1];
			area[2] = b[x];
			area[3] = b[x+1];

			bool should_process = true;
			int car_count = 0;
			for(const char&c: area) {
				//cout << c ;
				if(c == '#') should_process = false;
				if(c == 'X') car_count++;
			}


			if (should_process) result[car_count] += 1;
			
		}
	}

	for(int& i: result) {
		cout << i << endl;
	}
}