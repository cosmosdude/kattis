#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>

using namespace std;

struct birthday {
	string name;
	int priority;
};



inline int strbd2int(string & str) {
	int mm = 0, dd = 0;
	bool post_slash = false;
	for(int i = 0; i < str.length(); i++) {
		char c = str[i];
		if (c == '/') {
			post_slash = true; 
			continue;
		} else {
			if (post_slash) mm = mm*10 + c-'0';
			else dd = dd*10 + c-'0';
		}
	}
	return (mm << 8) ^ (dd);
}


int main() {
	int n; cin >> n;

	map<int, birthday> bds;

	while(n--) {
		string name;
		int priority;
		string ddmm;
		cin >> name >> priority >> ddmm;
		
		int key = strbd2int(ddmm);
		birthday bd = {name, priority};

		if (!bds.count(key)) bds[key] = bd;
		else {
			auto tmp = bds[key];
			bds[key] = (tmp.priority >= bd.priority) ? tmp : bd;
		}
	}

	vector<string> s;
	for(auto [k,v]: bds) s.push_back(v.name);
	sort(s.begin(), s.end());

	cout << s.size() << endl;
	for(const string & name: s) cout << name << endl;
	
    return 0;
}