#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;


struct point {
	double x, y;
};

double distance(point p1, point p2) {
	double w = p2.x - p1.x;
	double h = p2.y - p1.y;
	return sqrt(pow(w,2) + pow(h,2));
}

int main() {

	double cx, cy;
	cin >> cx >> cy;

	point cp = {cx, cy};

	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	point tlp = {x1, y1};
	point trp = {x2, y1};
	point blp = {x1, y2};
	point brp = {x2, y2};

	point p {0, 0};

	if (cx < x1) p.x=x1;
	else if (cx > x2) p.x = x2;
	else p.x = cx;

	if (cy < y1) p.y = y1;
	else if (cy > y2) p.y = y2;
	else p.y = cy;


	printf("%0.6f\n", distance(cp, p));

}

