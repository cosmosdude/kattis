#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;

struct Info {
	string uni, team;
};

int main() {
	int n;
	cin >> n;

	vector<Info> prize;
	while(n) {
		Info i;
		cin >> i.uni >> i.team;
		if (prize.size() < 12) {
			bool should_add = true;
			
			for(const Info& p: prize) {
				if (p.uni == i.uni) {
					should_add = false;
					break;
				}
			}

			if (should_add) {
				prize.push_back(i);
			}
		}
		n--;
	}
	cerr << "-------" << endl;
	for(Info& p: prize) {
		cout << p.uni << " " << p.team << endl;
	}
}