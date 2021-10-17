#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;

struct number {
	int n;
	double x, y;
};

int main() {


	vector<number> a;
	for(int i = 0; i < 9; i++) {
		int x = i%3, y = i/3, n;
		cin >> n;

		number num {n, (double)x, (double)y};

		int index = 0;
		for(; index < a.size(); index++) {
			if (num.n < a[index].n) break;
		}
		a.insert(a.begin()+index, num);
	}


	double l = 0;
	number prev = a[0];
	for(int i = 1; i < a.size(); i++) {
		l += sqrt(pow(prev.x - a[i].x, 2) + pow(prev.y - a[i].y , 2));
		prev = a[i];
	}

	printf("%0.10f\n", l);


	return 0;
}