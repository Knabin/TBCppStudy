#include <iostream>

using namespace std;

int generateID()
{
	static int s_id = 0;
	return ++s_id;
}

class Something
{
public:
	//static int m_value = 1; // error!
	// a static data member with an in-class initializer must have non-volatile const integral type or be specified as 'inline'
	// static은 initialize 할 수 없음
	static int				s_value;
	static const int		s_value2 = 1;	// static const인 경우 바로 초기화
	static constexpr int	s_value3 = 1;	// constexpr: 컴파일 타임에 값이 결정되어야 함, 싱글톤
};

int Something::s_value = 1;	// define in cpp
//int Something::s_value2 = 1;	// error!

int main()
{
	// 호출될 때마다 s_id 증가
	cout << generateID() << endl;
	cout << generateID() << endl;
	cout << generateID() << endl;


	// Something 변수 선언 전에도 존재함!
	cout << &Something::s_value << " " << Something::s_value << endl;

	Something st1;
	Something st2;

	st1.s_value = 2;

	cout << &st1.s_value << " " << st1.s_value << endl;
	cout << &st2.s_value << " " << st2.s_value << endl;

	Something::s_value = 1024;

	cout << &Something::s_value << " " << Something::s_value << endl;

	return 0;
}