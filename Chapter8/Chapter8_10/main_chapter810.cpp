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
	// static�� initialize �� �� ����
	static int				s_value;
	static const int		s_value2 = 1;	// static const�� ��� �ٷ� �ʱ�ȭ
	static constexpr int	s_value3 = 1;	// constexpr: ������ Ÿ�ӿ� ���� �����Ǿ�� ��, �̱���
};

int Something::s_value = 1;	// define in cpp
//int Something::s_value2 = 1;	// error!

int main()
{
	// ȣ��� ������ s_id ����
	cout << generateID() << endl;
	cout << generateID() << endl;
	cout << generateID() << endl;


	// Something ���� ���� ������ ������!
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
