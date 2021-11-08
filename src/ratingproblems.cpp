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

	int n, k;
	cin >> n >> k;

	int r = n - k;

	double total = 0;
	while(k) {
		double rating;
		cin >> rating;
		total += rating;
		k --;
	}

	double min = (total + (double)r * -3.0) / (double)n;
	double max = (total + (double)r * 3.0) / (double)n;

	cout << min << " " << max << endl;

	
	return 0;
}