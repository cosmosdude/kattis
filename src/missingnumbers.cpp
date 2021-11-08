#include <string>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {

	int n; cin >> n;

	int prev = 0;
	bool miss_anything = false;

	while(n) { n--;

		int a; cin >> a;

		int d = a-prev;

		if (d > 1) {
			miss_anything = true;
			for(int i = 1; i < d; i++) {
				cout << prev + i << endl;
				
			}
		}
		prev = a;

	}

	if (miss_anything == false) cout << "good job" << endl;

}