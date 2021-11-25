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

int main() {
	cinint(w); cinint(h);
	while(w) {

		int tx = 0, ty = 0;
		int ax = 0, ay = 0;

		int x1 = 0, x2 = w-1, y1 = 0, y2 = h-1;

		twhile(n) {
			cinchar(c); cinint(m);

			if (c == 'u') {
				ty += m;
				ay = min(ay+m, y2);
			} else if (c=='d') {
				ty -= m;
				ay = max(ay-m, y1);
			} else if (c=='r') {
				tx += m;
				ax = min(ax+m, x2);
			} else {
				tx -= m;
				ax = max(ax-m, x1);
			}
		}

		printf("Robot thinks %d %d\n", tx, ty);
		printf("Actually at %d %d\n", ax, ay);
		cout << endl;
		cin >> w >> h;
	}

	return 0;
}

