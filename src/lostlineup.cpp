#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;

int main() { 

	int n; cin >> n;

	vector<int> num_of_people; num_of_people.resize(n-1);
	cout << 1 << " ";

	for(int i = 1; i < n; i++) {
		int loc; cin >> loc;
		num_of_people[loc] = i+1;
	}

	for(int i = 0; i < num_of_people.size(); i++) {
		cout << num_of_people[i];
		if(i+1 != num_of_people.size()) {
			cout << " ";
		}
	}
	cout << endl;
}

