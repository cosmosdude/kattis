#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;

int main() {

	int n; cin >> n;
	while(n --) {

		int total = 0;

		int k; cin >> k;
		while(k--) {
			int next; cin >> next;
			total = max(total-1, 0) + next;
		}
		cout << total << endl;
	}

}

