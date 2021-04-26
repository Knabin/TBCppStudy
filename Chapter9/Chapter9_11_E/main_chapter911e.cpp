#include <iostream>
#include <cassert>

using namespace std;

class MyString
{
public:
	char *m_data = nullptr;
	int m_length = 0;

public:
	MyString(const char *source = "")
	{
		assert(source);

		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0';
	}

	MyString(const MyString &source)
	{
		cout << "Copy constructor" << endl;

		m_length = source.m_length;

		// source�� �ݵ�� ������� ����� �״�� ������ �ᵵ OK
		// �ƴ϶�� �޸𸮸� ���� ��ƾ� ��!
		// shallow copy: �ּҰ��� �״�� ����
		// deep copy: �ּҰ��� �ƴ�, �޸𸮸� ���Ҵ� �� ���� �纹��
		if (source.m_data != nullptr)
		{
			// �޸𸮸� ���� �Ҵ�
			m_data = new char[m_length];

			// source�� �����͸� ����
			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
	}

	// �����ϰ� ���� ���� ���� �ӽ÷� ���� ���� ���� ����
	//MyString(const MyString &source) = delete;

	MyString& operator = (const MyString & source)
	{
		// shallow copy
		//this->m_data = source.m_data;
		//this->m_length = source.m_length;

		cout << "Assignment operator " << endl;

		// ���� �������� ���, �ڱⰡ �ڱ⿡�� ���� ���� hello = hello;
		// ���α׷������� ������ ���� �� �ֱ� ������ �ּҰ� ���ٸ� �׳� return
		if (this == &source) // prevent self-assignment
			return *this;

		// �̹� �޸𸮸� ������ ���� �� �ֱ� ������ ���� ����
		delete[] m_data;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;

		return *this;
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
		MyString copy = hello;
		cout << (int *)copy.m_data << endl;
		cout << copy.getString() << endl;

	}
	cout << hello.getString() << endl;

	MyString str1 = hello;	// Copy constructor
	//MyString str1(hello);	// �� �򰥸��� �̷��� ���� OK
	MyString str2;
	str2 = hello;	// Assignment operator


	// �� ����� �ȴٸ�...?
	// 1. std::string�� ���
	// 2. std::string�� ��ӹ޾Ƽ� �߰� ����
	// 3. member ������ std::string data ����

	return 0;
}
