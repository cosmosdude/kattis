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

void process(long p, long q) {

	vector<char> op;
	long index = 0;
	while( p != 1 or q != 1 ) {

		if (p > q) { // right
			op.push_back('r');
			p = p-q;
		} else { // left
			op.push_back('l');
			q = q-p;
		}
	}

	fer(i, 0, op.size()) {
		if (op[i] == 'l') index = index*2+1;
		else index = index*2+2;
	}
	
	cout << index + 1 << endl;

}

int main() {

	twhile(t) {
		cinint(n); cout << n << " ";
		cinstring(s);

		int left = 0; int right = 0;
		bool post_slash = false;
		for(char c: s) {

			if (c == '/') { post_slash = true; continue; }

			if(post_slash) right = right * 10 + c-'0';
			else left = (left * 10) + c-'0';

		}
		process(left, right);
	}
	
	return 0;
}

