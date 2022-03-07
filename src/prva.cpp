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

int main() {
	
	cinint(r); cinint(c);

	vector<string> grid;

	for(int i = r; i; i--) {
		cinstring(row);
		grid.push_back(row);
	}


	vector<string> words;


	for(const string & row: grid) {
		string buffer = "";
		for(int i = 0; i < row.length(); i++) {
			char c = row[i];

			if (c != '#') buffer += c;
			
			if (c == '#' or i+1 >= row.length()) {
				if (buffer.length() > 1) words.push_back(buffer);
				buffer = "";
			}
		}		
	}

	for (int i = 0; i < c; i++) {
		string buffer = "";
		for(int j = 0; j < r; j++) {
			char c = grid[j][i];
			
			if (c != '#') buffer += c;

			if (c == '#' or j+1 >= r) {
				if (buffer.length() > 1) words.push_back(buffer);
				buffer = "";
			}
		}
	}


	sort(words.begin(), words.end());

	cout << words[0] << endl;



	return 0;
}
