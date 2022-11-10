#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	/*Array3.Дано целое число N(> 1), а также первый член A и разность D арифметической прогрессии.
		Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии :
	A, A + D, A + 2·D, A + 3·D, . . .*/
	/*int a, d;
	cin >> a >> d;
	const int n = 10;
	int mas[n];
	mas[0] = a;
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i-1] +d;
	}
	for (int i = 0; i < n; i++) {
		cout << mas[i] << endl;
	}
	cout << endl;*/
	/*Array4.Дано целое число N(> 1), а также первый член A и знаменатель D
		геометрической прогрессии.Сформировать и вывести массив размера N,
		содержащий N первых членов данной прогрессии :A, A·D, A·D2, A·D3*/
		/*int a, d;
		cin >> a >> d;
		const int n = 10;
		int mas[n];
		mas[0] = a;
		for (int i = 1; i < n; i++) {
			mas[i] = mas[i - 1] * d;
		}
		for (int i = 0; i < n; i++) {
			cout << mas[i] << endl;
		}
		cout << endl;*/
		/*Array5.Дано целое число N(> 2).Сформировать и вывести целочисленный
			массив размера N, содержащий N первых элементов последовательности
			чисел Фибоначчи FK :
		F1 = 1, F2 = 1, FK = FK−2 + FK−1, K = 3, 4*/
	/*const int f = 10;
	int n[f];
	n[0] = 1;
	n[1] = 1;
	for (int i = 2; i < f; i++) {
		n[i] = n[i - 2] + n[i - 1];
	}
	for (int i = 0; i < f; i++) {
		cout << i << "-" << n[i] << endl;
	}*/
		/*Array11.Дан массив A размера N и целое число K(1 ≤ K ≤ N).
						Вывести элементы массива с порядковыми номерами, кратными K : AK, A2·K, A3·K, . . . .
						Условный оператор не использовать.*/
	/*const int n = 10;
	int a, k;
	cin >> a;
	cin >> k;
	int arr[n];
	srand(time(nullptr));
	for (int i = 1; i > arr[i]; i++) {
		for (int i = 1; i <= n; i++)
		{
			arr[i] = rand();
			if (i % k == 0)
			{
				cout << i << "-" << arr[i] << endl;
			}
			else {
				continue;
			}
		}
	}*/
	//Array7◦
		//.Дан массив размера N.Вывести его элементы в обратном порядке.
	/*const int n = 10;
	int mas[n];
	srand(time(nullptr));
	for (int i = n - 1; i >= 0; i--) {
		mas[i] = rand();
		cout << mas[i] << " ";
	}
	*/









	return 0;
}

