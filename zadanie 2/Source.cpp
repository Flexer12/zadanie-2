#include "Header.h"
int antimod(int a)
{
	if (a < 0)
		return a;
	return -a;
}
int ran(int z)
{
	z = rand() % 10;
	return z;
}

void ybivanie(int* mas, unsigned size)
{
	int min = 100000;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < (size - 1 - i); j++)
		{
			if (mas[j] < mas[j + 1])
			{
				swap(mas[j], mas[j + 1]);
			}
		}
	}
}
void vozrastanie(int* mas, unsigned size)
{
	int max = mas[0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < (size - 1 - i); j++)
		{
			if (mas[j] > mas[j + 1])
			{
				swap(mas[j], mas[j + 1]);
			}
		}
	}
}
void inverse(int* mas, unsigned size)
{

	for (int i = 0; i < size / 2; i++)
	{
		swap(mas[i], mas[size - i - 1]);

	}

}

void print(int* arr, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}