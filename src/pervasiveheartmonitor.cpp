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
	int a; cin >> a; while(a--)
#define tfor(i, a)\
	int a; cin >> a; for(int i = 0; i < a; i++)

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

double s2d(const string& s) {

	double result = 0;

	double divisor = 0;

	for(char c: s) {
		if (c == '.') {
			divisor = 10;
			continue;
		}

		double v = double(c-'0');

		if (divisor > 0) {
			result += v/divisor;
			divisor *= 10;
		} else { result = result * 10 + v; }
		
	}

	return result;
}

void process(const string& line) {
	stringstream sin(line);

	string token;
	sin >> token;

	vector<string> name;
	vector<double> rates;

	while(!sin.fail()) {
		if (isdigit(token[0]))  rates.push_back(s2d(token));
		else name.push_back(token);
		sin >> token;
	}

	double avg = 0;
	for(double r: rates) avg += r;

	avg /= double(rates.size());

	printf("%0.5f ", avg);
	for(int i = 0 ; i < name.size(); i++)
		cout << name[i] << (i+1 == name.size() ? '\n' : ' ');

}

int main() {

	string s; getline(cin, s);
	while(!cin.fail()) {
		process(s);
		getline(cin, s);
	}

	return 0;
}

