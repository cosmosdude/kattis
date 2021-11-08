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

	int n, q;
	cin >> n >> q;

	vector<int> companies;
	while(n) {
		int loc;
		cin >> loc;
		companies.push_back(loc);
		n--;
	}

	while(q) {
		int a, b, c;

		cin >> a >> b >> c;

		if (a == 1) {
			companies[b - 1] = c;
		} else {
			cout << abs(companies[b - 1] - companies[c - 1]) << endl;
		}


		q--;
	}



	
	return 0;
}