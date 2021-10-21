#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	//задание 5

	//даны два числа
	double n, m;
	cout << "Введите два числа: "<<endl;
	cin >> n >> m;
	//находим их модули
	n = abs(n);
	m = abs(m);
	/*
	* находим сумму модулей
	* разность
	* произведение
	* и частное
	*/
	cout << "Сумма модулей этих чисел:" << endl;
	cout << n + m << endl;

	cout << "Разность модулей этих чисел:" << endl;
	cout << abs(n - m) << endl;

	cout << "Произведение модулей этих чисел:" << endl;
	cout << n * m << endl;

	cout << "Частное модулей этих чисел:" << endl;
	//выясняем, какое из чисел больше
	if (n > m)
		cout << n / m;
	else
		cout << m / n;


	return 0;
}
