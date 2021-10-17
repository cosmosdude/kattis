#include <string>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void process(int c) {
	int n; cin >> n;

	vector<int> num;
	vector<int> val;

	for(int i = 0; i < n; i++) {
		int gn; cin >> gn;

		bool notfound = true;

		for(int j = 0; j < num.size(); j++) {
			if (num[j] == gn) {
				val[j] += 1;
				notfound = false;
				break;
			}
		}

		if (notfound) {
			num.push_back(gn);
			val.push_back(0);
		}

	}

	for(int i = 0; i < val.size(); i++) {
		if (val[i] == 0) {
			cout << "Case #" << c << ": " << num[i] << endl;
			break;
		}
	}

}

int main() {
	int n; cin >> n;

	for(int i = 0; i < n; i++) {
		process(i + 1);
	}
}