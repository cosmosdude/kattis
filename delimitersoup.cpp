#include <string>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>
#include <cstring>
#include <numeric>
#include <iostream>
#include <list>
#include <forward_list>
#include <stack>

using namespace std;

void output_and_exit(char c, int i) {
	cout << c << " " << i << endl;
	exit(0);
}


int main() {
	int n; cin >> n;
	cin.ignore();
	string expression;
	getline(cin, expression);

	stack<char> tokens;

	for(int i = 0; i < expression.size(); i++) {
		char c = expression[i];
		// if openning bracket
		if (c == '(' or c == '[' or c == '{') {
			tokens.push(c);
		} // if closing bracket
		else if (c == ')' or c == ']' or c == '}') {
			if (tokens.empty()) {
				output_and_exit(c, i);
			} else if (c == ')') {
				if (tokens.top() == '(') tokens.pop();
				else output_and_exit(c, i);
			} else if (c == ']') {
				if (tokens.top() == '[') tokens.pop();
				else output_and_exit(c, i);
			} else {
				if (tokens.top() == '{') tokens.pop();
				else output_and_exit(c, i);
			}
		}
	}

	cout << "ok so far" << endl;
}