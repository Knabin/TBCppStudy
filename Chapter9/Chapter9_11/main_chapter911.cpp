#include <iostream>
#include <cassert>

using namespace std;

class MyString
{
	// 일반적으로 멤버 변수는 private으로 구현하나, 주소를 찍기 위하여 public 선언
//private:
public:
	char *m_data = nullptr;
	int m_length = 0;

public:
	MyString(const char *source = "")
	{
		assert(source);

		// null 문자를 추가하기 위하여 +1
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
		MyString copy = hello;	// 복사 생성자 호출
		//copy = hello;			// 대입 연산자 호출
		cout << (int *)copy.m_data << endl;
		cout << copy.getString() << endl;

		// 이 경우, 기본 복사 생성자에 의해 hello의 멤버변수들을 복사받는다.
		// 포인터 또한 복사되기 때문에 hello.m_data와 copy.m_data가 가리키고 있는 주소가 동일해진다.
		// scope를 벗어나면서 copy의 소멸자가 호출되고,
		// 소멸자에서는 메모리 누수를 막기 위해 동적 할당된 m_data를 delete하여 heap에서 지운다.
	}

	// 따라서 같은 주소를 가리키고 있던 hello에서 접근하면 이상한 값이 출력된다.
	cout << hello.getString() << endl;

	return 0;
}