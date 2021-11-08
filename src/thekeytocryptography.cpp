#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <map>
#include <array>
#include <algorithm>

using namespace std;

int value(char c) {
	return c-'A';
}

char getchar(int value) {
	value = value%26;
	if (value < 0) value+=26;
	return char(value+'A');
}

int main() {

	string encrypted, initial_key;
	cin >> encrypted >> initial_key;

	vector<char> dynamic_keys;
	dynamic_keys.resize(encrypted.length() + initial_key.length());

	for(int i = 0; i < initial_key.length(); i++) 
		dynamic_keys[i] = initial_key[i];

	string decrypted_text = encrypted;

	int char_index = 0;
	int key_index = 0;
	int dkey_index = initial_key.length();

	for(; char_index < encrypted.length();) {
		char encrypted_char = encrypted[char_index];
		char key_char = dynamic_keys[key_index];

		char decrypted_char = getchar(value(encrypted_char)-value(key_char));

		decrypted_text[char_index] = decrypted_char;
		dynamic_keys[dkey_index] = decrypted_char;
		char_index++; key_index++; dkey_index++;
	}

	cout << decrypted_text << endl;
	
	return 0;
}