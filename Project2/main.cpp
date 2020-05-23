#include "Functions.h"
void main()
{
	setlocale(LC_ALL, "rus");
	int n;
	std::cout << "¬ведите размер массива: "; std::cin >> n;
	int* arr = new int[n] {};
	FillRand(n, arr);
	Print(n, arr);

	delete[] arr;
}
