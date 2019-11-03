#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string path;
	fstream R;
	char z;
	int n = 0;

	cout << "Specify the full path to the text: " << endl;
	cin >> path;
	R.open(path, ios::in);
	if (R) {

		while (!R.eof()) {

			R >> z;
			if (z == ','
				|| z == '.' 
				|| z == '-' 
				|| z == '?' 
				|| z == '"' 
				|| z == '!' 
				|| z == ';' 
				|| z == ':' 
				|| z == '...' 
				|| z == '(' 
				|| z == ')' ) {
				n++;
			}
		}
		R.close();

		n == 0 ?
			cout << '\n' << "There are no punctuation marks in the text" :
			cout << '\n' << "Result: " << n;
	}
	else cout << "The file doesn't exist" << endl;
	return 0;

}
