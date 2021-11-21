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


void calculate_f(Long n) {

	n = n-1;

	vector<char> op;

	while(n) {
		op.push_back((n%2 == 0 ? 'r': 'l')); 
		n = (n-1)/2;
	}

	Long p = 1, q = 1;

	fer(i, 0, op.size()) {
		char c = op[i];
		if (c == 'r') p = p+q;
		else q = p+q;
	}

	cout << p << '/' << q << endl;
}


Long find_n(Long p, Long q) {
	vector<char> op;

	while(p!=1 or q!=1) {
		if (p > q) {
			p = p-q;
			op.push_back('r');
		}
		else {
			q = q-p;
			op.push_back('l');
		}
	}

	Long n = 0;
	fer(i, 0, op.size()) {
		char c = op[i];
		if (c == 'l') n = n*2 + 1;
		else n = n*2 + 2;
	}
	return n+1;
}

Long s2i(const string& s) {
	Long result = 0;
	for(char c: s) result = result*10 + Long(c-'0');
	return result;
}

void process(string pq) {
	string sp, sq;
	bool slashed = false;
	for(char c: pq) {
		if (c == '/') {
			slashed = true;
			continue;
		}
		if (slashed) sq += c;
		else sp += c;
	}

	Long p = s2i(sp), q = s2i(sq);

	if (p < q) {
		q -=p;
		cout << p+q << "/" << q << endl;
	}  else if (p > 1 and q == 1) {
		cout << 1 << "/" << p+q << endl;
	}
	else {
		// right
		// p > q
		int siftupcount = p/q;
		p = p-q*siftupcount;

		// sift up as parent
		q = q-p;
		// sift down right
		p = p+q;

		q = q+p*siftupcount;

		cout << p << "/" << q << endl;
	}
	
}



int main() {

	twhile(t) {
		cinint(c);
		cout << c << " ";
		cinstring(s);
		process(s);
	}

	return 0;
}

