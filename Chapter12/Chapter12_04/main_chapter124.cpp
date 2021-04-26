#include <iostream>
using namespace std;

class Base
{
public:
	~Base()
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int *m_array;

public:
	Derived(int length)
	{
		m_array = new int[length];
	}

	~Derived()
	{
		cout << "~Derived()" << endl;
		delete[] m_array;
	}
};

int main()
{
	// ��� ������ ���� �ڽ� �Ҹ��� �� �θ� �Ҹ��� ȣ��
	Derived derived(5);
	cout << endl;

	// Base�� ����� ���� �Ϲ����� => Base()�� �Ҹ��ڸ� ȣ���
	// ���� �Ҵ� �� �޸� ���� �߻�!
	Derived *derived2 = new Derived(5);
	Base *base = derived2;
	delete base;

	return 0;
}