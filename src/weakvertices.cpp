#include "bits/stdc++.h"
using namespace std;


// long long
typedef long long Long;
typedef long double BFloat;
// vector strings
typedef vector<string> Vstring; typedef vector<Vstring> VVString;
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

// ---------------------
void process(int n) {
	vector<vector<int>> grid(n);
	for(int i = 0; i < n; i++) {
		grid[i] = vector<int>(n);
		for(int j = 0; j < n; j++) cin >> grid[i][j];
	}
	vector<bool> flags(n); for(int i = 0; i < n; i++) flags[i] = false;

	for(int y = 0; y < n; y++) {

		if (flags[y] == true) continue;

		int edges = 0;
		for(int x = 0; x < n; x++) {
			if (grid[y][x] == 1) edges++;
		}

		if (edges > 1) {
			for(int x = 0; x < n; x++) {

				// 0->1
				// if pivot is found
				if (grid[y][x] == 1) {

					for(int i = 0; i < n; i++) {
						if (i == x or i == y) continue;
						// 0->2
						if (grid[y][i] == 1 and grid[i][x] == 1) {
							flags[y] = true;
							flags[x] = true;
							flags[i] = true;
						}
					}
				}
			}
		}
	}

	vector<int> nodes;
	for(int i = 0; i < flags.size(); i++){
		if (flags[i] == 0) nodes.push_back(i);
	}

	pv(nodes);
}


int main() {
	
	int n; cin >> n;
	while(n != -1) {
		process(n);
		cin >> n;
	}
	
	return 0;
}

