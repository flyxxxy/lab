#include <iostream>
#include <fstream>


using namespace std;

int main() {
	int s = 0;
	int d = 0;
	string path;
	fstream file;
	char z;
	string str;
	int n = 0;
	int el_am = 0;



	cout << "Specify the full path to the text: " << endl;
	cin >> path;
	file.open(path, ios::in);
	if (file) {

	
		file >> str;
		for (int i = 0; i < str.length(); i++) {
			s = i + 1;
			d = i + 2;
			if (str[i] == '.' && str[s] == '.' && str[d] == '.') {
				el_am++;
			}
		}
	file.close();
	}

	file.open(path, ios::in);
	if (file) {
		while (!file.eof()) {

			file >> z;
			if (z == ','
				|| z == '.'
				|| z == '-'
				|| z == '?'
				|| z == '"'
				|| z == '!'
				|| z == ';'
				|| z == ':'
				|| z == '('
				|| z == ')') {
				z = 0;
				n++;
			}
		}
	
	file.close();

		if (n == 0) {
			cout << '\n' << "There are no punctuation marks in the text";
		}
		else if (el_am == 0)
			cout << '\n' << "Result: " << n;
		else {
			n = n - 2 * el_am;
			cout << '\n' << "Result: " << n;
		}
	}
	else cout << "The file doesn't exist" << endl;
	return 0;

}
