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
struct Point {
	int level = -1;
	int row = -1;
	int column = -1;

	Point up() { return {level+1, row, column}; }
	Point down() { return {level-1, row, column}; }

	Point west() { return {level, row-1, column}; }
	Point east() { return {level, row+1, column}; }

	Point north() { return {level, row, column-1}; }
	Point south() { return {level, row, column+1}; }

	vector<Point> adjacents() {
		return {up(), down(), west(), east(), north(), south()};
	}

	bool operator==(const Point & b) const {
		return level == b.level and row == b.row and column == b.column;
	}

};

typedef vector<int> Grid1d;
typedef vector<Grid1d> Grid2d;
typedef vector<Grid2d> Grid3d;

typedef vector<vector<string>> Dungeon3DGrid;


bool is_inbound(Point point, Point bound) {
	if (point.level < 0 or point.level >= bound.level) return false;
	if (point.row < 0 or point.row >= bound.row) return false;
	if (point.column < 0 or point.column >= bound.column) return false;

	return true;
}

// Doesn't test inbound
//
// true if not '#'
bool can_go(Point point, const Dungeon3DGrid & dungeon) {
	return dungeon[point.level][point.row][point.column] != '#';
}

bool is_visited(Point p, Grid3d & grid) {
	return grid[p.level][p.row][p.column] != 0;
}

void scan_route(
	const Dungeon3DGrid & dungeon, 
	Grid3d & time_taken, 
	Point start,
	Point end,
	Point bound
) {
	if (is_inbound(start, bound))

	time_taken[start.level][start.row][start.column] = 0;
	
	queue<Point> next_visit;
	next_visit.push(start);

	while(!next_visit.empty()) {

		Point current = next_visit.front();
		next_visit.pop();

		auto adjs = current.adjacents();
		for(const auto& vertex: adjs) {
			if (is_inbound(vertex, bound) and can_go(vertex, dungeon)) {
				if (!is_visited(vertex, time_taken)) {

					time_taken[vertex.level][vertex.row][vertex.column] = time_taken[current.level][current.row][current.column] + 1;

					next_visit.push(vertex);
				}
			}

			if (vertex == end) {
				next_visit = queue<Point>();
				break;
			}
		}
	}


	int minutes = time_taken[end.level][end.row][end.column];
	if (minutes > 0) cout << "Escaped in " << minutes << " minute(s)." << endl;
	else cout << "Trapped!" << endl;
	
}

void solve(int l, int r, int c) {

	Dungeon3DGrid dungeon(l, vector<string>(r));

	Point start;
	Point end;

	for(int li = 0; li < l; li++) {
		for(int ri = 0; ri < r; ri++) {
			cinstring(row);

			dungeon[li][ri] = row;

			// mark start and end points;
			for(int i = 0; i < row.length(); i++) {
				if (row[i] == 'S') start = {li, ri, i}; 
				if (row[i] == 'E') end = {li, ri, i}; 
			}
		}
	}

	Grid3d vertex_parents(
		l, Grid2d(
			r, Grid1d(c, 0)
		)
	);

	Point bound = {l, r, c};

	scan_route(
		dungeon, vertex_parents, 
		start, end, bound
	);

}

int main() {
	int l, r, c;
	cin >> l >> r >> c;
	cin.ignore();

	while(l != 0) {
		solve(l, r, c);

		cin >> l >> r >> c;
		cin.ignore();
	}

	return 0;
}

