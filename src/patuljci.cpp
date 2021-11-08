#include <string>
#include <iostream>
#include <cmath>

using namespace std;


int main() {
	const int n = 9;
	int a[9];

	int total = 0;
	for(int i = 0; i < n;i++) {
		int in; cin >> in;
		a[i] = in;
		total += in;
	}

	int dt = total - 100;

	int k = n;
	for(int i = 0; i < k; i++) {
		int req = dt - a[i];
		for(int j = 0; j < k; j++) {
			if (j == i) continue;
			if (a[j] == req) {
				a[i]=0; a[j]=0;
				k=0;
				break;
			}
		}
	}

	for(int i = 0; i < n; i++) {
		int v = a[i];
		if (v) cout << v << endl;
	}
}