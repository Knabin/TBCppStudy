#include <iostream>

using namespace std;

int main()
{
	int length;
	cin >> length;

	//int array[length];
	int *array = new int[length]();	// ���� 0���� �ʱ�ȭ
	//							{11, 22, 33, 44, 55, 66}; // length�� 6 �̸����� �� ��� error!

	array[0] = 1;
	array[1] = 2;

	for (int i = 0; i < length; i++)
	{
		cout << (uintptr_t)&array[i] << endl;
		cout << array[i] << endl;
	}

	delete[] array;


	int fixedArray[] = { 1,2,3,4,5 };	// compile-time
	int *array2 = new int[3]{ 1,2,3 };	// new int[]�� ���� ����!

	// resizing, ���������δ� �� ��! �� ū �޸𸮸� ���� ���� �����ؼ� �ű��
	// OS�� ��û�� �� �� ����(�� ���� �ְ�, �� �� ���� ����)

	delete[] array2;

	return 0;
}