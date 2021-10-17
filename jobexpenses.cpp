#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;


int main() {
	int n;
	cin >> n;

	int total = 0;
	while(n){ 

		int input;
		cin >> input;

		if (input < 0) total += abs(input);
		n--;
	}

	cout << total << endl;

}