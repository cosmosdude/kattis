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

string translate(char c) {
	c = tolower(c);
	switch(c) {
		case 'a': return "@";
		case 'b': return "8";
		case 'c': return "(";
		case 'd': return "|)";
		case 'e': return "3";
		case 'f': return "#";
		case 'g': return "6";
		case 'h': return "[-]";
		case 'i': return "|";
		case 'j': return "_|";
		case 'k': return "|<";
		case 'l': return "1";
		case 'm': return "[]\\/[]";

		case 'n': return "[]\\[]";
		case 'o': return "0";
		case 'p': return "|D";
		case 'q': return "(,)";
		case 'r': return "|Z";
		case 's': return "$";
		case 't': return "\'][\'";
		case 'u': return "|_|";
		case 'v': return "\\/";
		case 'w': return "\\/\\/";
		case 'x': return "}{";
		case 'y': return "`/";
		case 'z': return "2";

		default: return string() + c;
	}
}

int main() {
	// @11 `/0|_||Z 8@$3 @|Z3 8310[]\[]6 ']['0 |_|$.
	// @11 `/0|_||Z 8@$3 @|Z3 8310[]\[]6 ']['0 |_|$.

	// \/\/[-]@'][''$ ']['[-]3 #|Z3(,)|_|3[]\[](`/, |<3[]\[][]\[]3']['[-]?
	// \/\/[-]@'][''$ ']['[-]3 #|Z3(,)|_|3[]\[](`/, |<3[]\[][]\[]3']['[-]?

	// @ []\[]3\/\/ @1|D[-]@83']['!
	// @ []\[]3\/\/ @1|D[-]@83']['!

	cinline(str);
	for(char c: str) {
		cout << translate(c);
	}
	cout << endl;

	return 0;
}

