#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << " Введите количество треугольников " << endl;
	cin >> n;
	float a, b, c;
	float p;
	float* arr1 = new float[n];
	float* arr2 = new float[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Введите стороны " << i + 1 << " треугольника" << endl;
		cin >> a;
		cin >> b;
		cin >> c;

		while ((a + b) <= c || (b + c) <= a || (a + c) <= b)
		{
			cout << " Такого треугольника не существует " << endl;
			cout << "Введите стороны " << i + 1 << " треугольника" << endl;
			cin >> a;
			cin >> b;
			cin >> c;
		}
			p = (a + b + c) / 2;
			arr1[i] = a + b + c;
			arr2[i] = sqrt(p * (p - a) * (p - b) * (p - c));
		
	}
	int choose1, choose2;
	cout << "Введите по какому признаки искать треугольник" << endl << "1 - по периметру" << endl << "2 - по площади" << endl;
	cin >> choose1;
	cout << "Введите какой искать треугольник" << endl << "1 - наибольший" << endl << "2 - наименьший" << endl;
	cin >> choose2;
	if (choose1 == 1)
	{
		if (choose2 == 1)
		{
			int max1 = arr1[0];
			for (int i = 0; i < n; i++)
			{
				if (arr1[i] > max1)
					max1 = arr1[i];
			}
			cout << max1;
		}
		else
		{
			int min1 = arr1[0];
			for (int i = 0; i < n; i++)
			{
				if (arr1[i] < min1)
					min1 = arr1[i];
			}
			cout << min1;
		}
	}
	if (choose1 == 2)
	{
		if (choose2 == 1)
		{
			int max2 = arr2[0];
			for (int i = 0; i < n; i++)
			{
				if (arr2[i] > max2)
					max2 = arr2[i];
			}
			cout << max2;
		}
		else
		{
			int min2 = arr2[0];
			for (int i = 0; i < n; i++)
			{
				if (arr2[i] < min2)
					min2 = arr2[i];
			}
			cout << min2;
		}
	}
}

