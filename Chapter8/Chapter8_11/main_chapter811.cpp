#include <iostream>

using namespace std;

class Something
{
public:
	// inner class
	// class 내에서 static 변수를 초기화하는 것처럼 구현할 수 있음
	class _init
	{
	public:
		_init()
		{
			s_value = 9876;
		}
	};

private:
	static int s_value;
	int m_value;

	static _init s_initializer;

public:
	Something()
		: m_value(123)//, s_value(1024)	// error! static 생성자 지원X
	{

	}

	static int getValue()
	{
		//return this->s_value;	//error! nonstatic function에서만 가능
		//return m_value;	//error! this로 접근해야 하는 모든 것 불가능
		return s_value;
	}

	int temp()
	{
		// this: 특정 인스턴스의 그 멤버 값을 사용하겠다
		return this->s_value;
	}
};

int Something::s_value = 1024;
Something::_init Something::s_initializer;

int main()
{
	// 인스턴스 정의 전, static 멤버 변수 접근 가능
	// private라고 하면 접근 불가능!! => static 함수 호출
	//cout << Something::s_value << endl;
	cout << Something::getValue() << endl;

	Something s1, s2;
	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;


	// member function pointer
	// 함수는 주소가 같음! s1에 따로, s2에 따로가 아니라 Something의 temp가 하나 있고,
	// s1에 있는 걸 가지고 이 함수를 실행시켜라!
	//int (Something::*fpr1)() = &s1.temp;
	int (Something::*fptr1)() = &Something::temp;

	//s2.*fptr1 => s2라는 인스턴스의 포인터를 넘겨 주고, temp가 작동하는 형태
	cout << (s2.*fptr1)() << endl;


	// 인스턴스와 관계 없이 실행시킬 수 있음
	int (*fptr2)() = &Something::getValue;
	cout << fptr2() << endl;


	return 0;
}