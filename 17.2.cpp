#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n, i, j, l;
	int k = 0;
	cout << "Введите размер массива: ";
	cin >> n;
	int* a = new int[n];
	cout << "Введите эелементы массива: ";
	for (i = 0; i < n; i++)
		cin >> a[i];
	cout << "Введите l: ";
	cin >> l;
	for (i = 0; i < n; i++)
	{
		if (a[i] == a[i + 1])
		{
			k++;
			if (k > l)
				for (j = i + 1; j > (i - k); j--)
					a[j] = 0;
		}
		else 
			if (a[i] != a[i + 1] && k > 0)
			k = 0;
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] != 0)
			cout << a[i] << " ";
		if (a[i] == 0 && a[i - 1] != 0)
		cout << a[i] << " ";
	}
	return 0;
}