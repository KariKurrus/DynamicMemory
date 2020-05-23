#include "Functions.h"
void FillRand(const int n, int* arr)
{
	for (int j = 0; j < n; j++)
	{
		arr[j] = rand() % 100;
	}
}
void Print(const int n, int* arr)
{
	for (int k = 0; k < n; k++)
	{
		std::cout << arr[k] << "\t";
	}
	std::cout << std::endl;
}