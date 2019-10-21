#include <iostream>

using namespace std;
int main() {
		
	int n = 0;
	cout << "Enter a quantity of numbers: " << endl;
	cin >> n;
	int *B = new int[n];
	int max=0;
	int min=0;
	int result = 0;
	
	switch (n) {
	case 1:
		cout << "Enter " << n << " number: ";
		break;
	default:
		cout << "Enter " << n << " numbers: ";
		break;
	}
	
	for (int i = 0; i < n; i++) {
		cin >> B[i];
	}

	for (int i = 0; i < n; i++) {
		if (min > B[i]) 
			min = B[i];
		if (max < B[i])
			max = B[i];
	}

	if (max == 0)
		cout << "No positive numbers" << endl;
	else if (min == 0)
		cout << "No negative numbers" << endl;
	else if (max != 0 && min != 0) {
		result = max - min;
		cout << "Result: " << result << endl;
	}
	
	delete[] B;
	return 0;
}

