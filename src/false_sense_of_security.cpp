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
string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_,.?";
vector<string> codes {
	// A   b        c        d      e     f       g
	".-", "-..." , "-.-." , "-..", ".", "..-.", "--.",
	// h     i       j      k       l     m     n
	"....", "..", ".---", "-.-", ".-..", "--", "-.",
	// o       p    q       r       s      t      u
	"---", ".--.", "--.-", ".-.", "...", "-", "..-",
	// v     w       x       y       z
	"...-", ".--", "-..-", "-.--", "--..",
	// _       ,       .      ?
	"..--", ".-.-", "---.", "----",
};

map<char, string> c2s;
map<string, char> s2c;

void init_tables() {
	for(int i = 0; i < chars.length(); i++) c2s[chars[i]] = codes[i];
	for(int i = 0; i < chars.length(); i++) s2c[codes[i]] = chars[i];
}

void solve(string encrypted) {

	string morse;
	vector<int> codelens;

	for(char c: encrypted) {
		string code = c2s[c];

		morse += code;
		codelens.push_back(code.length());
	}	

	reverse(codelens.begin(), codelens.end());

	string decrypted = "";
	int current = 0;
	string buffer = "";

	for(const int len: codelens) {
		for(int i = 0; i < len; i++, current++) 
			buffer += morse[current];
		decrypted += s2c[buffer];
		buffer = "";
	}

	cout << decrypted << endl;

}

int main() {
	init_tables();

	cinline(encrypted);
	while(!cin.fail()) {
		solve(encrypted);
		// cerr << "line:" << encrypted << endl;
		getline(cin, encrypted);
	}
	

	


	return 0;
}

