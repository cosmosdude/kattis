#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>


int main() {
	using namespace std;

	int n, h, v;

	cin >> n >> h >> v;

	int hh, vv;
	hh = n - h;
	vv = n - v;

	int a, b, c, d;
	a = h * v;
	b = v * hh;
	c = vv * h;
	d = hh * vv;
	

	cout << max(d, max(a, max(b, c))) * 4 << endl;



	
	return 0;
}