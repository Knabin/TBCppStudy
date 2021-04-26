#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

int main()
{
	{
		AutoPtr<Resource> res1(new Resource);	// int i; int *ptr1(&i);
		AutoPtr<Resource> res2;					// int *ptr2 = nullptr;

		cout << std::boolalpha;

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;

		res2 = res1;	// move semantics

		cout << res1.m_ptr << endl;
		cout << res2.m_ptr << endl;	// �̹� ������ �޸𸮸� �ٽ� ������� ��
	}

	//	syntax					vs. semantics
	// ����, �������� �Ǵ� �ų�?	vs. ������ �������� �ǹ̰� ����?
	int x = 1, y = 1;
	x + y;

	string str1("Hello"), str2("World");
	str1 + str2;	// �ǹ̰� �޶���

	// doSomething(res1); ó��
	// �־��µ� ��� �۵������� sementics�� ���� �޶���!

	// value semantics (copy semantics)
	// reference sementics (pointer)
	// move sementics (move)

	//AutoPtr<Resource> res1(new Resource);
	//doSomething(res1);
	// �̵��ؼ� ������ doSomething()�� �����鼭 res1�� �Ҹ�� ����
	// �̷��� �͵��� ��� ó���� �ų�? => ����Ʈ �����Ϳ��� �߿��� �κ�!

	return 0;
}
