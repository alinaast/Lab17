#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, i, x, y, a1, a2, b1;
	double c, max = 0;
	cout << "Введите количество точек: ";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << "Введите координаты точки " << i << ": ";
		cin >> x >> y;
		if (y > 0 && x < 0)
	{
			c = sqrt(x * x + y * y);
			if (c > max)
			{
				max = c;
				a1 = x;
				a2 = y;
				b1 = i;
			}
		}
	}
	cout << "Максимально удаленная от начала координат точка " << b1 << " равна: ";
	if (max > 0)
		cout << "(" << a1 << ";" << a2 << ")" << endl;
	else 
		cout << "0";
	return 0;
}