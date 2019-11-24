#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, i, j, m, h, k, g, s;
	int d = 1;
	int l = 0; 
	int f = 1;
	cout << "Введите размер массива: ";
	cin >> n;
	int* a = new int[n];
	cout << "Введите элементы массива: ";
	for (i = 0; i < n; i++)
		cin >> a[i];
	cout << "Введите k: ";
	cin >> k;
	for (i = (n - 1); f > 0; i--)
	{
		h = a[i];
		if (a[i] == a[i - 1])
			f++;
		else
		{
			g = f;
			f = 0;
		}
	}
	f = 1;
	for (i = 0; i < n; i++)
	{
		if (f == k)
		{
			l = i;
			d++;
			m = a[i];
		}
		if (a[i] != a[i + 1])
			f++;
	}
	f = (l + 1) - (d - 1);
	s = d;
	for (i = f; i < n; i++)
		a[i] = a[i + (d - 1)];
	for (i = n - 1; d > 1; i--)
	{
		a[i] = m;
		d--;
	}
	for (i = n - s; i >= f; i--)
		a[i] = a[i - g];
	for (i = f; g > 0; i++)
	{
		a[i] = h;
		g--;
	}
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}
