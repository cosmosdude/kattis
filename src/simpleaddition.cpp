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
int v(char c) { 
	if (c==' ') return 0;
	return c-'0'; 
}
char ch(int v) { return v+'0'; }

void add(string& lhs, string& rhs, int carry = 0, int i = 0) {

	if (i >= lhs.length()) return;

	if (i >= rhs.length() and carry == 0) return;

	int l = v(lhs[lhs.length() - 1 - i]);
	int r = 0;
	if (i < rhs.length()) 
		r = v(rhs[rhs.length() - 1 - i]);
	int res = l + r + carry;
	lhs[lhs.length()-1-i] = ch(res%10);
	
	add(lhs, rhs, res/10, i+1);
}

string add_str(string lhs, string rhs) {
	if (lhs.length() < rhs.length()) swap(lhs, rhs);
	lhs = " " + lhs;
	add(lhs, rhs);
	return lhs;
}



int main() {
	
	cinstring(lhs);
	cinstring(rhs);

	string result = add_str(lhs, rhs);
	for(auto c: result) 
		if (c != ' ') cout << c;
	cout << endl;

	return 0;
}

