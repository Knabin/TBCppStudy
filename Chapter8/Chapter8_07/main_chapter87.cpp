#include <iostream>

using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(int id)
	{
		// this: 현재 이 주소를 갖고 있는 인스턴스, 여기서는 생략 가능
		this->setID(id);
		this->m_id;

		// 자기 자신의 주소를 출력
		cout << this << endl;
	}

	// 인스턴스가 추가될 때마다 함수를 생성하는 것이 아닌, 모든 인스턴스가 공유하여 사용
	// Simple::setID()가 어딘가에 저장되어 있고, Simple::setID(&s1, 2); 이런 식으로 작동함
	void setID(int id) { m_id = id; }
	int	 getID() { return m_id; }
};

int main()
{
	Simple s1(1), s2(2);
	s1.setID(2);
	s2.setID(4);	// == Simple::setID(&s2, 4); 문법적으로는 허용X

	cout << &s1 << " " << &s2 << endl;

	return 0;
}