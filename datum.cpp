#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;

int month_starts[] {
	4, 0, 0, 3,
	5, 1, 3, 6,
	2, 4, 0, 2
};

string dnames[] {
	"Sunday", 
	"Monday", 
	"Tuesday", 
	"Wednesday", 
	"Thursday", 
	"Friday", 
	"Saturday"
};


void process(int d, int month) {
	int day = d;
	d -= 1;
	d %= 7;
	d += month_starts[month-1];
	d %= 7;
	cout << dnames[d] << endl;
}

int main() {

	int d, month;
	cin >> d >> month;
	process(d, month);

	
	
}