#include <iostream>

using namespace std;

// return type ����
const char* getName()
{
	return "Jack Jack";
}

int main()
{
	//char name[] = "Jack Jack";
	//char *name = "Jack Jack";	error!! ������ "Jack Jack"�� ��� �޸𸮿� ���� ������ ����
	const char *name = "Jack Jack";	// ����
	const char *name2 = getName();
	const char *name3 = "Jack Jack2";

	cout << uintptr_t(name) << endl;
	cout << uintptr_t(name2) << endl;	// ������ �޸� ���
	cout << uintptr_t(name3) << endl;	// �ٸ� �޸� ���


	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World!";

	// cout���� ���ڿ��� Ư���ϰ� ó����! ������ �����Ͱ� ������ ������ �迭�� ���ɼ��� ���ٰ� �Ǵ�
	cout << int_arr << endl;	// ���: �ּ�
	cout << char_arr << endl;	// ���: Hello, World!
	cout << name << endl;		// ���: Jack Jack

	char c = 'Q';
	// �޸� �ּҰ� ���ϱ� ���ڿ��̶�� �����ϱ� ������, null�� ���� ������ �� �����!
	cout << &c << endl;	

	return 0;
}