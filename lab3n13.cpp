#include <iostream>
#include <fstream>

using namespace std;

void Punct_marks () {

	int s = 0;
	int d = 0;
	string path;
	fstream file;
	string str;
	int n = 0;

	cout << "Specify the full path to the text: " << endl;
	cin >> path;
	file.open(path, ios::in);

	if (file) {
		while (!file.eof()) {
			file >> str;
			for (int i = 0; i < str.length(); i++) {
				s = i + 1;
				d = i + 2;
				if (str[i] == '.' && str[s] == '.' && str[d] == '.') {
					n++;
					i += 2;
				}
				else if (str[i] == ','
					|| str[i] == '.'
					|| str[i] == '-'
					|| str[i] == '?'
					|| str[i] == '"'
					|| str[i] == '!'
					|| str[i] == ';'
					|| str[i] == ':'
					|| str[i] == '('
					|| str[i] == ')') {
					n++;
				}
			}
		}
		file.close();

		if (n == 0) {
			cout << '\n' << "There are no punctuation marks in the text";
		}
		else {
			cout <<'\n' << "Result: " << n;
		}
	}
	else cout << "The file doesn't exist" << endl;
}

int main() {
	
	Punct_marks();
	return 0;
}
