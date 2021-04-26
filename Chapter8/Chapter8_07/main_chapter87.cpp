#include <iostream>

using namespace std;

class Simple
{
private:
	int m_id;

public:
	Simple(int id)
	{
		// this: ���� �� �ּҸ� ���� �ִ� �ν��Ͻ�, ���⼭�� ���� ����
		this->setID(id);
		this->m_id;

		// �ڱ� �ڽ��� �ּҸ� ���
		cout << this << endl;
	}

	// �ν��Ͻ��� �߰��� ������ �Լ��� �����ϴ� ���� �ƴ�, ��� �ν��Ͻ��� �����Ͽ� ���
	// Simple::setID()�� ��򰡿� ����Ǿ� �ְ�, Simple::setID(&s1, 2); �̷� ������ �۵���
	void setID(int id) { m_id = id; }
	int	 getID() { return m_id; }
};

int main()
{
	Simple s1(1), s2(2);
	s1.setID(2);
	s2.setID(4);	// == Simple::setID(&s2, 4); ���������δ� ���X

	cout << &s1 << " " << &s2 << endl;

	return 0;
}
