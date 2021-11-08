#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>

using namespace std;

struct Date {
	int day, month, year;
};

Date str2date(string & s) {
	int p = 0;
	Date d {0, 0, 0};
	for(int i = 0; i < s.length(); i++) {
		char c = s[i];
		if(c == '/') {
			p+=1; continue;
		}
		if (p == 0) d.year = d.year*10 + c-'0';
		else if (p==1) d.month = d.month*10 + c-'0' ;
		else d.day = d.day*10 + c-'0';
	}

	return d;
}

void print(Date d) {
	printf("%02d/%02d/%04d", d.day, d.month, d.year);
}

void consider(string& name, Date& studies, Date& dob, int courses) {
	cout << name << " ";
	if (studies.year >= 2010) cout << "eligible";
	else if (dob.year >= 1991) cout << "eligible";
	else if (courses < 41) cout << "coach petitions";
	else cout << "ineligible";
	cout << endl;
}

int main() {

	int n; cin >> n;
	while(n--) {
		string input;

		string name; 
		Date studies, dob;
		int courses;

		cin >> name;
		cin >> input; studies = str2date(input);
		cin >> input; dob = str2date(input);
		cin >> courses;

		consider(name, studies, dob, courses);
	}

    return 0;
}