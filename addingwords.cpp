#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>

using namespace std;



map<string, int> vi;
map<int, string> iv;

int asinteger(string& s) {
	int r = 0;
	if (s.empty()) return 0;

	int i = 0;
	int sign = (s[i] == '-') ? -1 : 1;
	if (sign < 0) i ++;

	for(; i < s.length(); i++) 
		r = (r*10) + s[i]-'0';
	return r*sign;
}

bool is_operator(string & s) {
	return s[0] == '+' || s[0] == '-';
}

vector<string> tokenize(string& inst, char delimeter = ' ') {
	vector<string> tokens;
	string buffer;
	for(int i = 0; i < inst.length(); i++) {
		char c = inst[i];
		if (c == ' ' or i+1 == inst.length()) {
			
			if (c != ' ') buffer += c;

			if (!buffer.empty()) tokens.push_back(buffer);
			
			buffer = "";
		} else {
			buffer += c;
		}
	}
	return tokens;
}

void process_def(vector<string>& tokens) {

	if (tokens.size() < 3) return;

	string& token = tokens[1];
	int num = asinteger(tokens[2]);

	cerr << "let " << token << " = " << num << endl;

	if (vi.count(token)) {
		iv.erase(iv.find(vi[token]));
	}

	if (iv.count(num)) {
		vi.erase(vi.find(iv[num]));
	}

	vi[token] = num;
	iv[num] = token;
}

void process_clac(vector<string>& tokens) {

	string token;
	char op;
	char prev_op;

	// vm variables.
	int eax = 0;
	bool failed = false;

	for(int i = 1; i < tokens.size(); i+=2) {

		token = tokens[i];
		op = tokens[i+1][0];
		cout << token << " " << op << " ";

		if(i == 1) {
			prev_op = op;
			if (vi.count(token)) {
				eax = vi[token];
			} else {
				failed = true;
			}
		} else {
			if (vi.count(token)) {
				if (prev_op == '+') {
					eax += vi[token];
				} else {
					eax -= vi[token];
				}
			} else {
				failed = true;
			}
			prev_op = op;
		}

		if (op == '=') break;
	}

	if (failed) {
		cout << "unknown" << endl;
	} else {
		if (iv.count(eax)) {
			cout << iv[eax] << endl;
		} else {
			cout << "unknown" << endl;
		}
	}
}

void process_clear() {
	vi.clear(); iv.clear();
}

void process(string & inst) {

	vector<string> inputs = tokenize(inst);

	if(inputs.size() == 0) return;

	// if inst start with 'def'
	// inst[1] == 'e'
	if (inputs[0] == "def") {
		process_def(inputs);
	} else 
	// if inst start with 'calc'
	// inst[1] == 'a'
	if (inputs[0] == "calc") {
		process_clac(inputs);
	} else {
		process_clear();
	}

}

int main() {

	string inst;
	getline(cin, inst);

	while(!cin.fail()) {
		if (!inst.empty()) process(inst);
		getline(cin, inst);
	}

}

