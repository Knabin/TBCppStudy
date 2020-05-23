#include <iostream>
#include <cassert>

using namespace std;

class MyString
{
	// �Ϲ������� ��� ������ private���� �����ϳ�, �ּҸ� ��� ���Ͽ� public ����
//private:
public:
	char *m_data = nullptr;
	int m_length = 0;

public:
	MyString(const char *source = "")
	{
		assert(source);

		// null ���ڸ� �߰��ϱ� ���Ͽ� +1
		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0';
	}

	~MyString()
	{
		delete[] m_data;
	}

	char* getString() { return m_data; }
	int getLength() { return m_length; }
};


int main()
{
	MyString hello("Hello");

	cout << (int *)hello.m_data << endl;
	cout << hello.getString() << endl;

	{
		MyString copy = hello;	// ���� ������ ȣ��
		//copy = hello;			// ���� ������ ȣ��
		cout << (int *)copy.m_data << endl;
		cout << copy.getString() << endl;

		// �� ���, �⺻ ���� �����ڿ� ���� hello�� ����������� ����޴´�.
		// ������ ���� ����Ǳ� ������ hello.m_data�� copy.m_data�� ����Ű�� �ִ� �ּҰ� ����������.
		// scope�� ����鼭 copy�� �Ҹ��ڰ� ȣ��ǰ�,
		// �Ҹ��ڿ����� �޸� ������ ���� ���� ���� �Ҵ�� m_data�� delete�Ͽ� heap���� �����.
	}

	// ���� ���� �ּҸ� ����Ű�� �ִ� hello���� �����ϸ� �̻��� ���� ��µȴ�.
	cout << hello.getString() << endl;

	return 0;
}
