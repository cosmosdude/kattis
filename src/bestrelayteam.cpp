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
struct Player {
	int id = -1;
	string name = "";
	double first = 100000.f;
	double other = 100000.f;
};

int main() {

	vector<Player> players;
	tfor(ti, t) {
		Player p;
		p.id = ti;
		cin >> p.name >> p.first >> p.other;
		players.push_back(p);
	}

	vector<Player> flegs = players;
	sort(
		flegs.begin(), flegs.end(), 
		[] (const Player & a, const Player & b) -> bool {  
			return a.first < b.first;
		}
	);

	vector<Player> olegs = players;
	sort(
		olegs.begin(), olegs.end(), 
		[] (const Player & a, const Player & b) -> bool {  
			return a.other < b.other;
		}
	);



	Player first_leg;
	vector<Player> other_legs;
	double best_time_total = 100000;

	for(int i = 0; i < flegs.size(); i++) {
		double time_total = 0;

		Player fleg = flegs[i];
		
		time_total += fleg.first;

		vector<Player> b3olegs;
		for(int i = 0; b3olegs.size() != 3; i++){
			Player p = olegs[i];
			if (p.id == fleg.id) continue;

			b3olegs.push_back(p);
			time_total += p.other;
		}

		if (time_total < best_time_total) {
			best_time_total = time_total;
			first_leg = fleg;
			other_legs = b3olegs;
		}

		// break;
	}

	cout << best_time_total << endl;
	cout << first_leg.name << endl;
	cout << other_legs[0].name << endl;
	cout << other_legs[1].name << endl;
	cout << other_legs[2].name << endl;



	return 0;
}

