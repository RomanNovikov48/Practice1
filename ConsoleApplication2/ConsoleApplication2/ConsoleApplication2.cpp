#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int number, count;

	cout << "Введите число: ";
	cin >> number;

	count = number;

	while (number != 0)
	{
		cout << count << " цифра: " << number % 10 << endl;

		count--;

		number /= 10;
	}

	return 0;
}
