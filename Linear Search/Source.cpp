#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<array>
using namespace std;

/*
	Create a method to search an un-ordered array of integers for a value,
	if the value is found return the index of its position in the array,
	if not found, return -1.
*/

int arrayIndex(int num, int SIZE, int numbers[])
{
	for (int i = 0; i < SIZE; i++)
	{
		if (num == numbers[i])
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	const int SIZE = 10; // array size
	int numbers[SIZE] = {4, 3, 7, 2 , 8, 10, 13, 67, 45, 34}; //array
	int n = 67; // the value wanted to be searched

	cout << arrayIndex(n, SIZE, numbers) << endl;
	
	system("PAUSE");
}