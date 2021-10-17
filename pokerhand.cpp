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

	vector<string> cards;
	
	int n = 5;
	while(n) {
		string str;
		cin >> str;
		cards.push_back(str);
		n --;
	}

	map<char, int> m;
	for(const string card: cards) {
		m[card[0]] += 1;
	}

	int max = 0;
	for(const auto [k, v]: m) {
		if (v > max) max = v;
	}
	cout << max << endl;



	
	return 0;
}