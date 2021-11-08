#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;



int main(void) {

	int n; cin >> n;

	vector<int> a;
	for(int i = 0; i < n; i++) {
		int v; cin >> v;
		a.push_back(v);
	}

	for(int i = 0; i < n-1; i++) {
		int v; cin >> v;
		for(int j = 0; j < n; j++) {
			if (v == a[j]) {
				a[j] = 0;
				break;
			}				
		}
	}

	for(int i = 0; i < n; i++) {
		if (a[i]) cout << a[i] << endl;
	}

}