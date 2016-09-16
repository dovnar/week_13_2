#include "iostream"

using namespace std;
void arrayCopy(int* arr, int* arr2, int size);
void printArray(int* arr, int size);
int main()
{
	int const size{ 10 };
	int arr[size]{ 15,25,16,18,14,65,62,48,26,35 };			//первый масив
	int arr2[size];															//второй масив
	printArray(arr, size);												//вывод первого масива
	arrayCopy(arr, arr2, size);	
	printArray(arr2, size);												//вывод второго масива
}

void arrayCopy(int* arr, int* arr2, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr2 + i) = *(arr + i);										// копирование масива
	}
}

void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";									//вывод мвсива
	}
	cout << endl;
}