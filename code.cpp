#include <iostream>
int main()
{
	setlocale(0, "");
	int a;
	std::cout << "Введите ваш возраст: ";
	std::cin >> a;
	if (a % 100 > 10 and a % 100 < 20)
		std::cout << "Вам " << a << " лет";
	else if ((a == 1) or (a % 10 == 1))
		std::cout << "Вам " << a << " год";
	else if ((a % 10 == 2) or (a % 10 == 3) or (a % 10 == 4))
		std::cout << "Вам " << a << " года";
	else
		std::cout << "Вам " << a << " лет";
}
