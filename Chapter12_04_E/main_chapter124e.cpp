#include <iostream>
using namespace std;

class Base
{
public:
	// �θ� Ŭ������ �Ҹ��ڸ� virtual�� �����ϸ� �ذ�!
	virtual ~Base()
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

	// �θ� �Ҹ��ڿ� virtual �ٿ����� �ڽ� �Ҹ��ڿ� override ǥ���� �� ����
	~Derived() override
	{
		cout << "~Derived()" << endl;
		delete[] m_array;
	}
};

int main()
{
	Derived *derived2 = new Derived(5);
	Base *base = derived2;
	delete base;

	return 0;
}