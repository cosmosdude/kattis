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

// [][][][]
//
int shape1_count(const Vint & f, int i = 0) {
	if (i > f.size() - 4 or f.size() < 4) return 0;

	return (
		(f[i] == f[i+1] and f[i] == f[i+2] and f[i] == f[i+3]) ? 
		1 : 0
	) + shape1_count(f, i+1);
	
}
int shape1(const Vint & field) {
	return field.size() + shape1_count(field);
}

// [][] 
// [][]
//
int shape2(const Vint & f, int i = 0) {
	if (i > f.size() - 2 or f.size() < 2) return 0;
	return (f[i]==f[i+1] ? 1 : 0) + shape2(f, i+1);
}

//   [][]
// [][]
//
int shape3_180(const Vint & f, int i = 0) {
	if (i > f.size() - 3 or f.size() < 3) return 0;
	return ((f[i]==f[i+1] and f[i+2]-f[i]==1) ? 1 : 0) + shape3_180(f, i+1);
}
int shape3_90(const Vint & f, int i = 0) {
	if (i > f.size() - 2 or f.size() < 2) return 0;
	return ((f[i]-f[i+1]==1) ? 1 : 0) + shape3_90(f, i+1);
}
int shape3(const Vint & f) {
	return shape3_180(f) + shape3_90(f);
}

// [][]
//   [][]
//
int shape4(const Vint & f) {
	Vint copy_f = f;
	for(int i = 0; i < f.size(); i++)
		copy_f[(f.size()-1)-i] = f[i];
	return shape3(copy_f);
}


//     []
//   [][][]
//
int shape5_flat(const Vint & f, int i = 0) {
	if (i > f.size() - 3 or f.size() < 3) return 0;
	return (((f[i]==f[i+1] or f[i]-f[i+1]==1) and (f[i]==f[i+2])) ? 1:0) + shape5_flat(f, i+1);
}
int shape5_90(const Vint & f, int i = 0) {
	if (i > f.size() - 2 or f.size() < 2) return 0;
	return ((abs(f[i]-f[i+1])==1) ? 1 : 0) + shape5_90(f, i+1);
}

int shape5(const Vint & f) {
	return shape5_90(f) + shape5_flat(f);
}

 
// [][][]
// []
//
// []
// []
// [][]
int shape6_flat(const Vint & f, int i = 0) {
	if (i > f.size() - 3 or f.size() < 3) return 0;
	return (((f[i+1]==f[i+2]) and (f[i]==f[i+1] or f[i+1]-f[i]==1)) ? 1 : 0) + 
	shape6_flat(f, i+1);
}
int shape6_vertical(const Vint & f, int i = 0) {
	if (i > f.size() - 2 or f.size() < 2) return 0;
	return ((f[i]==f[i+1] or f[i]-f[i+1]==2) ? 1 : 0) + shape6_vertical(f, i+1);
}
int shape6(const Vint & f) {
	return shape6_flat(f) + shape6_vertical(f);
}

int shape7(const Vint & f) {
	Vint copy_f = f;
	for(int i = 0; i < f.size(); i++)
		copy_f[(f.size()-1)-i] = f[i];
	return shape6(copy_f);
}





int main() {
	
	cinint(c); cinint(p);

	cinvector(int, field, c);

	int count = 0;
	switch(p) {
		case 1: count = shape1(field); break;
		case 2: count = shape2(field); break;
		case 3: count = shape3(field); break;
		case 4: count = shape4(field); break;
		case 5: count = shape5(field); break;
		case 6: count = shape6(field); break;
		case 7: count = shape7(field); break;
		default: break;
	}

	cout << count << endl;
	
	return 0;
}

