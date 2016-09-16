#include <iostream>

using namespace std;
void oppositeCopyArray(int* arr1, int* arr2, int size);
void printArray(int* arr, int size);
int main()
{
	int const size{ 10 };
	int arr1[size]{ 8,2,52,1,4,14,19,62,24,5 };
	int arr2[size];
	printArray(arr1, size);
	oppositeCopyArray(arr1, arr2, size);
	printArray(arr2, size);
}

void oppositeCopyArray(int * arr1, int * arr2, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr2 + i) = *(arr1 + size - i - 1);
	}
}

void printArray(int * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}
