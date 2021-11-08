#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

struct Info {
	long t;
	long d;
};

int main() {
	using namespace std;

	int n;
	cin >> n;

	long iv = 0;

	vector<Info> infos;
	while(n) {
		Info info {0, 0};
		cin >> info.t >> info.d;
		infos.push_back(info);
		n --;
	}

	cerr << "Possible speeds" << endl;
	for(int i = 0; i < infos.size() - 1; i++) {
		for(int j = i + 1; j < infos.size(); j++) {
			long t = infos[j].t - infos[i].t;
			long d = infos[j].d - infos[i].d;

			long s { d/t };

			if (s > iv) iv = s;

			cerr << s << " ";
		}
		cerr << endl;
	}

	cout << iv << endl;
	//if (count == 0) { cout << endl; }
}