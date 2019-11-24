#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, i, t, j, a1, a2, a3;
	double p = 0;
	cout << "Введите количество точек: ";
	cin >> n;
	int* x = new int[n];
	int* y = new int[n];
	for (i = 0; i < n; i++)
	{
		cout << "Введите x,y: ";
		cin >> x[i] >> y[i];
	}
	for (i = 0; i < n - 2; i++)
		for (j = i + 1; j < n - 1; j++)
			for (t = j + 1; t < n; t++)
				if ((sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2)) + sqrt(pow(x[j] - x[t], 2) + pow(y[j] - y[t], 2)) + sqrt(pow(x[t] - x[i], 2) + pow(y[t] - y[i], 2))) > p)
				{
					p = (sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2)) + sqrt(pow(x[j] - x[t], 2) + pow(y[j] - y[t], 2)) + sqrt(pow(x[t] - x[i], 2) + pow(y[t] - y[i], 2)));
					a1 = i;
					a2 = j;
					a3 = t;
				}
	cout << "Наибольший периметр равен: " << p << endl;
	cout << "Вершины треугольника равны: " << "1 вершина (" << x[i] << ";" << y[i] << ")" << endl << "2 вершина (" << x[j] << ";" << y[j] << ")" << endl << "3 вершина (" << x[t] << ";" << y[t] << ")";
	return 0;
}
