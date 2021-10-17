#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;

struct Value{
	int e, i, v;
};

void sync(int n) {
	vector<Value> arr1;
	vector<int> arr2;

	for(int i = 0; i < n; i++) {
		int in; cin >> in;

		Value v = {.e = in, .i = i, .v = 0};

		int j = 0;
		while(j < i) {
			if (v.e < arr1[j].e) {
				break;
			}
			j++;
		}
		arr1.insert(arr1.begin() + j, v);
	}

	for(int i = 0; i < n; i++) {
		int in; cin >> in;

		int j = 0;
		while(j < i) {
			if (in < arr2[j]) {
				break;
			}
			j++;
		}
		arr2.insert(arr2.begin() + j, in);
	}

	vector<int> output; output.resize(n);
	for(int i = 0; i < n; i++) {
		output[arr1[i].i] = arr2[i];
	}
	for(int i = 0; i < n; i++) {
		cout << output[i] << endl;
	}
}

int main(void) {

	int n; cin >> n;
	// cerr << "starting..." << endl;
	while(n) { 
		sync(n);
		
		cin >> n;
		if (n) cout << endl;
	}

}