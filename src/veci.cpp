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
int swappable_index(string & s) {
	for(int i = s.length() - 1; i > 0; i--) {
		if (s[i] > s[i-1]) return i-1;
	}
	return -1;
}


int main() {

	cinstring(s);

    int si = swappable_index(s);

    if (si < 0) cout << "0" << endl;
    else {
    	char digit = s[si];
    	int swap_index = si+1;
    	char swap_char = s[si+1];

    	for(int i = si+2; i < s.length(); i++) {
    		if (s[i] > digit && s[i] < swap_char) {
    			swap_char = s[i];
    			swap_index = i;
    		}
    	}
    	swap(s[si], s[swap_index]);
        for(int i = s.length()-1; i > si+1; i--)
            for(int j = si+1; j < i; j++)
                if (s[j] > s[j+1]) swap(s[j], s[j+1]);
        cout << s << endl;
    } 

	return 0;
}

