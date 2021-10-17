#include <string>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

struct LinkedList {
	int value;
	LinkedList * prev;
	LinkedList * next;
};

LinkedList * make_node(int value) {
	return new LinkedList {value, nullptr, nullptr};
}


void process() {

	string oplist; cin >> oplist;
	int n; cin >> n;

	cin.ignore();
	string list; getline(cin, list);

	if (n == 0) {
		// cout << "error" << endl;
		for(int i = 0; i < oplist.length(); i++) {
			if (oplist[i] == 'D') {
				cout << "error" << endl;
				return;
			}
		}
		cout << "[]" << endl;
		return;
	}

	int buffer = 0;

	vector<int> l;

	for(int i = 0; i < list.length(); i++) {
		char c = list[i];
		if (c == '[') {
			continue;
		} else if (c == ',' or c == ']') {
			l.push_back(buffer);
			buffer = 0;
		} else {
			buffer *= 10;
			buffer += c - '0';
		}
	}

	int start = 0, end = l.size()-1;

	bool is_front = true;

	for(const char&c: oplist) {
		if (c=='D') {

			// cerr << "Drop ";
			if (start > end) {
				cout << "error" << endl;
				return;
			} 

			if (is_front) {
				start ++;
			} else {
				end --;
			}

		} else {
			// cerr << "Reversed ";
			is_front = !is_front;
		}
	}
	// cerr << endl;

	if (start>end) {
		cout << "[]" << endl;
		return;
	}

	if (is_front) {
		for(int j = start; j <= end; j++) {
			if (j == start) cout << "[";
			cout << l[j];
			if (j!=end) cout << ",";
			if (j==end) cout << "]" << endl;
		}	
	} else {
		for(int j = end; j >= start; j--) {
			if (j == end) cout << "[";
			cout << l[j];
			if (j!=start) cout << ",";
			if (j==start) cout << "]" << endl;
		}
	}


	



	



}


int main() {

	int n; cin >> n;

	while(n) { n--;
		process();
	}
}