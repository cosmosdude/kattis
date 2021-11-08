#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>

using namespace std;


int main() {
	int n; cin >> n;
	vector<int> arr;
	while(n--) {
		int v; cin >> v;
		arr.push_back(v);
	}
	
	sort(arr.rbegin(), arr.rend());

	int a = 0, b = 0;
	for(int i = 0; i < arr.size(); i++) {
		if (i%2==0) a+=arr[i];
		else b+=arr[i];
	}
	printf("%d %d\n", a, b);
    return 0;
}