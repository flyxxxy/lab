#include <iostream>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int n;

	cout << "Введите количество чисел в массиве: " << endl;
	cin >> n;

	int* arr = new int[n];

	cout << "Введите числа массива: " << endl;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << "Начальный массив:   " << endl;
	copy(arr, arr + n, std::ostream_iterator<int>(cout, " "));

	srand(time(NULL));
	random_shuffle(arr, arr + n);

	cout << "После рандомной сортировки: " << endl;
	copy(arr, arr + n, std::ostream_iterator<int>(cout, " "));

	cout << endl;
	return 0;
}
