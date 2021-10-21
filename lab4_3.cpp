#include <iostream>
#include <cmath>
using namespace std;

int main()
{


	setlocale(LC_ALL, "Russian");
	//задание 3

	//даны два числа
	double a, b;
	cout << "Введите два числа:" << endl;
	cin >> a >> b;
	//находим их среднее арифметическое

	cout << "Среднее арифметическое этих чисел:" << endl;
	cout << (a + b) / 2;

	return 0;
}
