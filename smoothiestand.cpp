#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>
#include <cstring>
#include <numeric>
#include <iostream>
#include <list>
#include <forward_list>
#include <stack>
#include <climits>

using namespace std;



int main() {
	int k, r; cin >> k >> r;

	vector<int> ing(k);
	for(int i = 0; i < k; i++)
		cin >> ing[i];

	int best_money = 0;
	while(r--) {
		int count = INT_MAX;
		for(int i = 0; i < k; i++) {
			int requirement; cin >> requirement;
			if (requirement > 0) 
				count = min(count, ing[i]/requirement);
		}
		int money; cin >> money;
		best_money = max(money*count, best_money);
	}

	cout << best_money << endl;
}