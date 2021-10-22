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

double str2int(string& s) {
	double r = 0;
	for(char & c: s) r = r*10 + c-'0';
	return r;
}

struct item {
	double radius;
	string name;
};

int main() {
	int n; cin >> n;

	vector<item> items;
	while(n--) {
		string a, b;
		cin >> a >> b;
		item i;
		if (isdigit(a[0])) 
			i = {.radius = str2int(a)/2, .name = b};
		else 
			i = {.radius = str2int(b), .name = a};
		items.push_back(i);
	}

	sort(
		items.begin(), 
		items.end(), 
		[] (item a, item b) -> bool {
			return a.radius < b.radius;
		}
	);

	for(item & i: items) {
		cout << i.name << endl;
	}


	return 0;
}