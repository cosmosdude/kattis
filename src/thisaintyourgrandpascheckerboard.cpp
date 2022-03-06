#include "bits/stdc++.h"
using namespace std;


// long long
typedef long long Long;
typedef long double BFloat;
// vector strings
typedef vector<string> Vstring;
// vector primitives
typedef vector<char> Vchar; typedef vector<Vchar> VVchar;
typedef vector<int> Vint; typedef vector<Vint> VVint;
typedef vector<Long> Vlong; typedef vector<Vint> VVlong;

// declare var and immediately cin
#define cinvar(type, name)\
	type name; cin >> name;

#define cinchar(name) cinvar(char, name)
#define cinuint(name) cinvar(unsigned int, name)
#define cinint(name) cinvar(int, name)
#define cinlong(var) cinvar(long long, var)
#define cinulong(var) cinvar(unsigned long long, var)
#define cindouble(var) cinvar(double, var)
#define cinstring(var) cinvar(string, var)
// declare var and immediately getline
#define cinline(var)\
	string var; getline(cin, var);

#define cinvector(type, name, n) \
	vector<type> name(n);\
	for(auto& e: name) cin >> e;


#define twhile(a)\
	int a; cin >> a; cin.ignore(); while(a--)
#define tfor(i, a)\
	int a; cin >> a; cin.ignore(); for(int i = 0; i < a; i++)

// quick for
#define f(i, a, n) for(int i = a; i < n; i++)
#define fe(i, a, n) for(int i = a; i <= n; i++)
#define fr(i, a, n) for(int i = n-1; i> a; i--)
#define fer(i, a, n) for(int i = n-1; i >= a; i--)

#define fstr(i, s) f(i, 0, s.length())
#define ferstr(i, s) fr(i, s.length()-1, 0)

#define pvc(target, v, c)\
	for(int i = 0; i < v.size(); i++)\
		target << v[i] << (i==v.size()-1 ? '\n': c);

#define pv(v)\
	pvc(cout, v, ' ')

//----------------------

bool lt(const string& a, const string& b) {
	string aa = a.substr(0, 2);
	string bb = b.substr(0, 2);
	return aa < bb;
}

void sortofsorted(vector<string> & names) {
	for(int i = 1; i < names.size(); i++) {
		int j = i;
		while(j > 0 && lt(names[j], names[j-1])) {
			swap(names[j-1], names[j]);
			j--;
		}
	}
}

int main() {


	cinint(n);

	vector<int> cols(n);
	vector<pair<char, int>> cc(n, {' ', 1});

	// vector<int> rstat(n);

	bool status = true;

	for(int t = 0; t < n; t++) {

		cinstring(row);

		int rcount = 0;
		int rc = ' ';
		int rcc = 1;

		for(int i = 0; i < row.length(); i++) {
			int c = row[i];

			rcount += (c=='W') ? 1 : -1;
			cols[i] += (c=='W') ? 1 : -1;

			if (rc != c) { rc = c; rcc = 1; }
			else rc += 1;
			if (rc == 3) status = false;

			if (cc[i].first != c) { cc[i].first = c; cc[i].second = 1; }
			else cc[i].second += 1;

			if (cc[i].second == 3) status = false;

		}


		if (rcount != 0) status = false;
	}

	for(auto each: cols) if (each != 0) status = false;

	cout << status << endl;

	return 0;
}

