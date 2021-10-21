#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	//задание 2
	double d;
	double L, p = 3.14;
	//вводим диаметр окружности
	cout << "Введите число - длину диаметра:" << endl;
	cin >> d;
	//находим длину окружности
	L = d * p;
	cout << "Длина окружности равна:" << endl;
	cout << L;

	return 0;
}
