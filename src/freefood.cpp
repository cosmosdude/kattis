#include <string>
#include <iostream>
#include <iomanip>
#include <array>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <map>

using namespace std;


struct Event {
	int start, end;
};

bool overlaps(Event& a, Event& b) {
	if (b.start >= a.start && b.start <= a.end) return true;
	if (a.start >= b.start && a.start <= b.end) return true;
	return false;
}

Event merge(Event & a, Event & b) {
	return { min(a.start, b.start), max(a.end, b.end) };
}

int main() {

	int n; cin >> n;
	vector<Event> es;

	while(n) { n--;
		int a, b; cin >> a >> b;
		Event e = {a, b};

		int i = 0;
		for(; i < es.size(); i++) 
			if (e.start < es[i].start) break;
		
		es.insert(es.begin() + i, e);
	}

	cerr << "Output ..." << endl;
	int days = 0;
	Event e;
	for(int i = 0; i < es.size(); i++) {
		if (i == 0) e = es[i];
		else {
			if (overlaps(e, es[i])) {
				e = merge(e, es[i]);
			} else {
				cerr << e.start << "-" << e.end << endl;
				days += (e.end-e.start) + 1;
				e = es[i];
			}
		}
	}
	cerr << e.start << "-" << e.end << endl;
	days += e.end - e.start + 1;

	cout << days << endl;


	
}