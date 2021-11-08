#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>
#include <cstring>

using namespace std;



int main() {
	int n; cin >> n;

	while(n != -1) {

		int pt = 0;
		int total = 0;
		for(int i = 0; i < n; i++) {
			int s, t;
			cin >> s >> t;
			int dt = t - pt;
			pt = t;
			total += s * dt;
		}
		cout << total << " miles" << endl;

		cin >> n;
	}
}