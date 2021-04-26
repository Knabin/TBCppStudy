#include <iostream>

using namespace std;

//void printArray (int *array)	������!
void printArray(int array[])
{
	// parameter�� �迭�� ������ ��ó�� ��������, ���������δ� �����ͷ� �ٷ�
	cout << sizeof(array) << endl;	// ���: 4
	cout << *array << endl;	// ���: 9

	*array = 100;
}


int main()
{
	int array[5] = { 9,7,5,3,1 };

	// array�� �迭�� �ƴ϶� '������', ù ��° ���� �ּҸ� ��� ����
	cout << array[0] << " " << array[1] << endl;
	cout << array << endl;	// == &array[0]
	cout << &array[0] << endl;

	cout << *array << endl;	// ���: 9

	// ������ �������̱� ������ ���� ���� �� ���������� �����
	char name[] = "jackjack";
	cout << *name << endl;	// ���: j


	int *ptr = array;
	cout << ptr << endl;	// == &array[0]
	cout << *ptr << endl;	// ���: 9


	cout << sizeof(array) << endl;	// ���: 20, 4*5
	cout << sizeof(ptr) << endl;	// ���: 4, ������ ������ size


	printArray(array);

	// printArray �Լ� �ȿ��� ������ ���� main �Լ������� Ȯ�� ����
	// C������ �̷��� �뵵�� ���� ����Ͽ���, C++�� reference�� ���
	cout << array[0] << " " << *array << endl;	// ���: 100 100

	
	// ������ ����, ���� �׸� ��� ����
	cout << *ptr << " " << *(ptr + 1) << endl;	// ���: 100 7


	return 0;
}