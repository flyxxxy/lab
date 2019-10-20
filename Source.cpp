#include <iostream>

using namespace std;
int main() {
		
	int n = 0;
	cout << "Enter a quantity of numbers: " << endl;
	cin >> n;
	int *arr = new int[n];
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
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (min > arr[i]) 
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}

	if (max == 0)
		cout << "No positive numbers" << endl;
	else if (min == 0)
		cout << "No negative numbers" << endl;
	else if (max != 0 && min != 0) {
		result = max - min;
		cout << "Result: " << result << endl;
	}
	
	delete[] arr;
	return 0;
}

