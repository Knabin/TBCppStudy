#include <iostream>

using namespace std;

void printArray(const int array[], int length)
{
	for (int index = 0; index < length; index++)
		cout << array[index] << " ";
	cout << endl;
}

int main()
{
	/*			value	index
	3 5 2 1 4	1		3
	1 5 2 3 4	2		2
	1 2 5 3 4	3		3
	1 2 3 5 4	4		4
	1 2 3 4 5
	*/

	const int length = 5;

	int array[length] = { 3,5,2,1,4 };
	printArray(array, 5);

	// swap
	//int temp = array[0];
	//array[0] = array[1];
	//array[1] = temp;
	//
	//printArray(array, 5);
	// std::swap(...)

	for (int i = 0; i < length - 1; i++)
	{
		int value = array[i];
		int index = i;

		for (int j = i + 1; j < length; j++)
		{
			if (array[j] < value)
			{
				value = array[j];
				index = j;
			}
		}
		array[index] = array[i];
		array[i] = value;

		printArray(array, length);
	}
	cout << endl;


	int array2[length] = { 8,1,9,3,5 };
	printArray(array2, length);

	for (int startIndex = 0; startIndex < length - 1; startIndex++)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; currentIndex++)
		{
			if (array2[smallestIndex] > array2[currentIndex])
			{
				smallestIndex = currentIndex;
			}
		}
		// swap two values in the array
		// std::swap(array2[smallestIndex], array[startIndex]);
		{
			int temp = array2[smallestIndex];
			array2[smallestIndex] = array2[startIndex];
			array2[startIndex] = temp;
		}
		printArray(array2, length);
	}


	return 0;
}