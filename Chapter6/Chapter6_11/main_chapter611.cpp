#include <iostream>

using namespace std;

int main()
{
	// �������� �Ҵ��ϴ� �͵��� stack�� �Ҵ�, ������ heap
	//int array[1000000];	// error!! Stack overflow 

	//int var;
	//var = 7;
	int *ptr = new int(7);	// new int: int�� ���缭 �޸𸮸� �޾ƿ���, �� �ּҸ� �˷���
	//		   new int { 7 };
	*ptr = 7;

	cout << ptr << endl;
	cout << *ptr << endl;

	// �߿�!! �Ҵ���� �޸𸮸� �ٽ� ���� ��
	// OS�� �޸𸮸� ����ϰ� �ֱ� ������ ���α׷��� ����Ǹ� �ڵ����� ȸ����
	// delete�� OS�� �������� ���� ���� �������� �ݳ��ϴ� ����!
	delete ptr;
	ptr = NULL;	// ���� �� NULL, 0, nullptr �־� �ֱ�

	// ������ �ϴ��� �ּҴ� �״�� ���� ����, �˰� �ִ� ������ ������ �ٸ� �ּҴ���
	cout << "After delete" << endl;
	if(ptr != nullptr)
	{ 
		cout << ptr << endl;
		cout << *ptr << endl;
	}

	// �ٸ� ���α׷��� ��� �޸𸮸� ����ϰ� �־ �Ҵ���� ���� ���� ����
	// ���α׷��� ���� �ʰ� ¥����... std::nothrow => ������ �߻���Ű�� �ʰ� ������
	int *ptr2 = new (std::nothrow) int{ 7 };

	if (ptr2)
	{
		cout << ptr2 << endl;
		cout << *ptr2 << endl;
	}
	else
	{
		cout << "Could not allocate memory" << endl;
	}


	int *ptr3 = ptr2;

	delete ptr2;
	ptr2 = nullptr;
	ptr3 = nullptr;	// ptr3 �������� �ʰ� *ptr3 �����ϸ� ���� �߻�!!


	// memory leak �޸� ����
	// 1. �Ҵ��ϴ� �޸𸮰� ū ���, �۾� ������ Ȯ��
	// 2. debugger�� Diagnostic Tools Ȯ��
	// new�� delete�� OS�� �ٳ�;� �ϱ� ������ ���� => ���� ����ϴ� ���� ����
	while (true)
	{
		int *ptr = new int;
		cout << ptr << endl;

		delete ptr;
	}
	

	return 0;
}