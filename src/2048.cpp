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
typedef array<int,4> Row;
typedef array<Row, 4> Grid;

const int l = 4;
Grid grid;

void print(Grid & grid) {
	for(int i = 0; i < l; i++)
		for(int j = 0; j < l; j++)
			cout << grid[i][j] << (j+1 < l ? ' ' : '\n');
}

void move_left(Grid& grid) {

	f(y, 0, l) {
		int p = 0;

		f(x, 0, l) {
			
			int value = 0;

			if (p >= l) {
				grid[y][x] = 0;
				continue;
			} 

			if (p < x) p = x;

			// find any non-zero
			bool breakp = false;
			for(; p < l; p++) {
				// if found
				if (grid[y][p] != 0) {
					value = grid[y][p];
					// search for it's congruent
					for(int i = p+1; i < l; i++) {

						if (grid[y][i] == 0) continue;

						if (grid[y][p] == grid[y][i]) {
							value *= 2;
							p = i+1;
							breakp = true;
							break;
						}

						if (grid[y][p] != grid[y][i]) {
							p = i;
							breakp = true;
							break;
						}
					}
				}

				if (breakp) break;
			}
			grid[y][x] = value;
		}
	}
}

void rotright(Grid & grid) {
	Grid g = grid;
	for(int y = 0; y < l; y++)
		for(int x = 0; x < l; x++)
			grid[x][l-1-y] = g[y][x];
}

void rotleft(Grid&grid) {
	Grid g = grid;
	for(int y = 0; y < l; y++) 
		for(int x = 0; x < l; x++) 
			grid[y][x] = g[x][l-1-y];
}

void move_right() {
	rotright(grid); rotright(grid);
	move_left(grid);
	rotleft(grid); rotleft(grid);
}




void move_up() {
	rotleft(grid);
	move_left(grid);
	rotright(grid);
}

void move_down() {
	rotright(grid);
	move_left(grid);
	rotleft(grid);
}







int main() {

	for(int i = 0; i < l; i++) 
		for(int j = 0; j < l; j++) 
			cin >> grid[i][j];

	cinint(op);
	// 0 = left // 1 = up
	// 2 = right // 3 = down
	switch(op) {
		case 0: move_left(grid); break;
		case 1: move_up(); break;
		case 2: move_right(); break;
		default: move_down();
	}
	
	print(grid);

	
	return 0;
}

