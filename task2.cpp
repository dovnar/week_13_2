#include <iostream>

using namespace std;
void opposite(int* arr, int size);
void printArray(int* arr, int size);
int main()
{
	int const size{ 10 };
	int arr[size]{ 15,2,36,14,52,4,3,32,12,24 };
	printArray(arr, size);
	opposite(arr, size);
	printArray(arr, size);
}

void opposite(int * arr, int size)
{
	for (int i = 0; i < size/2; i++)
	{
		int k = *(arr + i);
		*(arr + i) = *(arr + size - 1 - i);
		*(arr + size - 1 - i) = k;
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
