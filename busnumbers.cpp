#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>

using namespace std;

struct range {
	int l, u;
};

void print(range & r) {
	if (r.l == r.u) cout << r.l;
	else if (r.u-r.l == 1) printf("%d %d", r.l, r.u);
	else printf("%d-%d", r.l, r.u);
}

bool equals(range & a, range & b) {
	return (a.l == b.l && a.u == b.u);
}

bool isempty(range & a) {
	return a.l == 0 && a.u == 0;
}

int main() {

	int n; cin >> n;
	vector<int> a;
	while(n--) {
		int num; cin >> num;
		a.push_back(num);
	}

	sort(a.begin(), a.end());

	vector<range> ranges;
	range r {0, 0};
	for(int i = 0; i < a.size(); i++) {
		int v = a[i];
		if (i == 0) {
			r = {v, v};
		} else {
			if (v-r.u == 1) {
				r.u = v;
			} else {
				ranges.push_back(r);
				r = {v, v};
			}
		}
	}

	if (!ranges.empty() && !isempty(r)) {
		if (!equals(ranges[ranges.size()-1], r)){
			ranges.push_back(r);
		}
	}
	if (ranges.empty() && !isempty(r)) {
		ranges.push_back(r);
	}

	for(int i = 0; i < ranges.size(); i++) {
		print(ranges[i]);
		if (i+1 != ranges.size()) cout << " ";
	}
	cout << endl;

    return 0;
}