#include <iostream>
#include <cmath>
using namespace std;

int main()
{


	setlocale(LC_ALL, "Russian");
	//задание 1

	//даны две стороны прямоугольника
	double a, b;
	cout << "Введите два числа - длины сторон прямоугольника" << endl;
	cin >> a >> b;
	double S, P;
	//находим площаль прямоугольника
	S = a * b;
	//находим периметр прямоугольника
	P = 2 * (a + b);
	cout << "Площадь прямоугольника равна:"<<endl<<S << endl;
	cout << "Периметр прямоугольника равен:" << endl << P;
	return 0;
}
