#include <string>
#include <iostream>
#include <array>
#include <cmath>

using namespace std;



int main() {

	int w;
	int n;

	cin >> w >> n;

	int total = 0;
	for(; n; n--) {
		int wi, li;
		cin >> wi >> li;

		total += (wi * li);
	}

	cout << total / w << endl;
	

}