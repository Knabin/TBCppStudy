#include <iostream>

using namespace std;

int main()
{
	short value = 7;
	short *ptr = &value;

	// ������ Ÿ���� ����� ���缭 ������ �� ĭ
	cout << uintptr_t(ptr - 1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl;
	cout << uintptr_t(ptr + 2) << endl;


	int array[] = { 9,7,5,3,1 };
	int *ptr2 = array;

	for (int i = 0; i < 5; i++)
	{
		//cout << array[i] << " " << uintptr_t(&array[i]) << endl;
		cout << *(ptr2 + i) << " " << uintptr_t(ptr2 + i) << endl;
	}


	char name[] = "Jack jack";

	const int n_name = sizeof(name) / sizeof(name[0]);

	char *ptr3 = name;

	for (int i = 0; i < n_name; i++)
	{
		//cout << *(name + i);
		cout << *(ptr3 + i);
	}


	return 0;
}