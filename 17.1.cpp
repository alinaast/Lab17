#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, i, m;
	int d = 1;
	int l = 0;
	cout << "Введите размер массива: ";
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	int* c = new int[n];
	cout << "Введите эелементы массива: ";
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 0; i < n; i++)
	{
		if (a[i] == a[i + 1])
		{
			d++;
			m = a[i];
		}
		else
			if (a[i] != a[i + 1] && d > 0)
		{
		l++;
		if (d > 2)
			b[l] = d + 1;
		else {
			b[l] = d;
			c[l] = m;
			d = 0;
		}
	}
		else
		{
			l++;
			b[l] = 1;
			c[l] = a[i];
		}
	}
	cout << "Массив B: ";
	for (i = 1; i <= l; i++)
		cout << b[i] << " ";
	cout << endl << "Массив C: ";
	for (i = 1; i <= l; i++)
		cout << c[i] << " ";
	return 0;
}