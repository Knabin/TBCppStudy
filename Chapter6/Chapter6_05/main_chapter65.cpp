#include <iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_columns = 5;

	for (int row = 0; row < num_rows; row++)
	{
		for (int col = 0; col < num_columns; col++)
		{
			cout << '[' << row << ']' << '[' << col << ']' << '\t';
		}
		cout << endl;
	}

	cout << endl;


	int array[num_rows][num_columns] =	// row-major <-> column-major
	{
		{1,2,3,4,5},		// row 0
		{6,7,8,9,10},		// row 1
		{11,12,13,14,15}	// row 2
	};
	//array[0][0] = 1;

	for (int row = 0; row < num_rows; row++)
	{
		for (int col = 0; col < num_columns; col++)
		{
			cout << array[row][col] << '\t';
		}
		cout << endl;
	}

	cout << endl;

	// 주소 찍어 보면 4씩 차이남
	for (int row = 0; row < num_rows; row++)
	{
		for (int col = 0; col < num_columns; col++)
		{
			cout << (int)&array[row][col] << '\t';
		}
		cout << endl;
	}

	// num_rows만 생략 가능! num_columns는 생략 불가능
	int array2[][num_columns] =
	{
		{1,2},	// 나머지 0으로 채움
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	int array3[num_rows][num_columns] = { 0 };


	int array4[5][4][3];

	return 0;
}