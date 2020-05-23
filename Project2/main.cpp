#include<iostream>
template<typename T>void FillRand(const int n, T arr);
template<typename T>void Print(const int n, T arr);
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
template<typename T>
void FillRand(const int n, T arr)
{
	for (int j = 0; j < n; j++)
	{
		arr[j] = rand() % 100;
	}
}
template<typename T>
void Print(const int n, T arr)
{
	for (int k = 0; k < n; k++)
	{
		std::cout << arr[k] << "\t";
	}
	std::cout << std::endl;
}