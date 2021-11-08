#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;
int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int g; cin >> g;
	cout << (
		(g >= a) ? 'A': 
		(g >= b) ? 'B': 
		(g >= c) ? 'C':
		(g >= d) ? 'D' :
		(g >= e) ? 'E' : 'F'
	) << endl;
	return 0;
}