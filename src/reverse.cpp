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

	vector<int> v;
	v.resize(n);
	while(n) {
		int in;
		cin >> in;
		v[n-1] = in;
		n--;
	}
	for(const int & i: v) cout << i << endl;
}