#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>

using namespace std;

void print(string & name, string & status, bool anomaly = false) {
	cout << name << " " << (status[1] == 'n' ? "entered" : "exited");
	if (anomaly) cout << " (ANOMALY)";
	cout << endl;
}

int main() {
	map<string, string> logs;

	int n; cin >> n;

	string anomaly = "(ANOMALY)";
	while(n--) {
		string status, name;
		cin >> status >> name;

		// not in the logs means
		// user is outside the building
		if (status == "entry") {
			if (logs.count(name))print(name, status, logs[name] == status);
			else print(name, status);
		} else  {
			if (logs.count(name)) print(name, status, logs[name] == status);
			else  print(name, status, true);
		}
		logs[name] = status;
	}

	return 0;
}