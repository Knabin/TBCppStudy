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

		// source가 반드시 사라지는 경우라면 그대로 가져다 써도 OK
		// 아니라면 메모리를 따로 잡아야 함!
		// shallow copy: 주소값을 그대로 복사
		// deep copy: 주소값이 아닌, 메모리를 재할당 후 값을 재복사
		if (source.m_data != nullptr)
		{
			// 메모리를 새로 할당
			m_data = new char[m_length];

			// source의 데이터를 복사
			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
	}

	// 구현하고 싶지 않을 때는 임시로 막아 버릴 수도 있음
	//MyString(const MyString &source) = delete;

	MyString& operator = (const MyString & source)
	{
		// shallow copy
		//this->m_data = source.m_data;
		//this->m_length = source.m_length;

		cout << "Assignment operator " << endl;

		// 대입 연산자일 경우, 자기가 자기에게 대입 가능 hello = hello;
		// 프로그램에서는 문제가 생길 수 있기 때문에 주소가 같다면 그냥 return
		if (this == &source) // prevent self-assignment
			return *this;

		// 이미 메모리를 가지고 있을 수 있기 때문에 먼저 지움
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
	//MyString str1(hello);	// 덜 헷갈리게 이렇게 선언 OK
	MyString str2;
	str2 = hello;	// Assignment operator


	// 이 방법이 싫다면...?
	// 1. std::string을 사용
	// 2. std::string을 상속받아서 추가 구현
	// 3. member 변수에 std::string data 선언

	return 0;
}