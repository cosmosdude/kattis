#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;

struct point{
	int x, y;
};


int main() {
	vector<point> points;
	int n = 3;


	int x1 = 10000, x2 = 0;
	int y1 = 10000, y2 = 0;
	while(n) {
		point p;
		cin >> p.x >> p.y;
		x1 = min(p.x, x1); x2 = max(p.x, x2);
		y1 = min(p.y, y1); y2 = max(p.y, y2);
		points.push_back(p);
		n--;
	}

	bool x1y1 = true;
	bool x1y2 = true;
	bool x2y1 = true;
	bool x2y2 = true;
	for(const point & p: points) {
		if(p.x == x1 && p.y == y1) x1y1 = false;
		if(p.x == x1 && p.y == y2) x1y2 = false;
		if(p.x == x2 && p.y == y1) x2y1 = false;
		if(p.x == x2 && p.y == y2) x2y2 = false;
	}

	if (x1y1) cout << x1 << " " << y1 << endl;
	if (x1y2) cout << x1 << " " << y2 << endl;
	if (x2y1) cout << x2 << " " << y1 << endl;
	if (x2y2) cout << x2 << " " << y2 << endl;

	if (!x1y1 && !x1y2 && !x2y1 && !x2y2) cout << x1 << " " << x2 << endl;


}