#include <iostream>

using namespace std;

int main()
{
	int *ptr = nullptr;
	int **ptrptr = nullptr;	// 이중 포인터, 포인터에 대한 포인터, 원래 데이터 타입은 integer

	int value = 5;

	ptr = &value;
	ptrptr = &ptr;

	cout << ptr << " " << *ptr << " " << &ptr << endl;
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
	cout << **ptrptr << endl;
	cout << endl;


	const int row = 3;
	const int col = 5;

	const int s2da[][5] = 
	{
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};

	/*
	int *r1 = new int[col] { 1, 2, 3, 4, 5 };
	int *r2 = new int[col] { 6, 7, 8, 9, 10 };
	int *r3 = new int[col] { 11, 12, 13, 14, 15 };
	int **rows = new int*[row] {r1, r2, r3};
	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++)
			cout << rows[r][c] << "\t";
		cout << endl;
	}
	delete[] r1;
	delete[] r2;
	delete[] r3;
	delete[] rows;
	*/

	int **matrix = new int*[row];

	for (int r = 0; r < row; r++)
		matrix[r] = new int[col];


	for (int r = 0; r < row; r++)
		for (int c = 0; c < col; c++)
			matrix[r][c] = s2da[r][c];

	// print all elements
	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++)
			cout << matrix[r][c] << "\t";
		cout << endl;
	}

	// delete
	for (int r = 0; r < row; r++)
		delete[] matrix[r];

	delete matrix;
	cout << endl;


	int *matrix2 = new int[row*col];

	for (int r = 0; r < row; r++)
		for (int c = 0; c < col; c++)
			matrix2[c + col * r] = s2da[r][c];

	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++)
			cout << matrix2[c + col * r] << "\t";
		cout << endl;
	}

	delete[] matrix2;


	return 0;
}