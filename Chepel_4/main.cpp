#include <iostream>
#include <iomanip>

using namespace std;

const double real_pi = 3.14159265;

double Pi(double eps)
{
	double pi = 1;
	double k = 1;
	while(abs(real_pi - pi * 2) >= eps)
	{
		pi *= ((k + 1) * (k + 1)) / (k * (k + 2));
		k += 2;
	}
	return pi * 2;
}

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Автор: Чепель Егор Максимович\n";
	cout << "Программа расчёт числа PI" << endl;

	cout << Pi(0.01) << endl;
	cout << Pi(0.001) << endl;
	cout << Pi(0.0001) << endl;

	system("pause");

	return 0;
}
