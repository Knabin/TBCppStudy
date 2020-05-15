#include <iostream>

using namespace std;

class Something
{
public:
	int m_value = 0;

	Something(const Something& st_in)
	{
		m_value = st_in.m_value;
		cout << "Copy Constructor" << endl;
	}

	Something()
	{
		cout << "Constructor" << endl;
	}

	void setValue(int value) //const	error!
	{
		m_value = value; 
	}
	//int  getValue() { return m_value; }
	int  getValue() const
	{
		// �� member function�� const�� = ���ο��� ���� �ٲ��� �ʴ´�
		// const�� ����� �� �ִ� �� const�� ���� �δ� ���� ����! debugging ����
		return m_value; 
	}
	
};

void print(const Something &st)
{
	// ����Ǵ� �� ������, default copy constuctor�� ���� ����
	// const & ����ϸ� ���� ����X -> ȿ������
	cout << &st << endl;
	cout << st.getValue() << endl;
}

int main()
{
	const int i = 0;
	//i = 1;	//error!

	// �ν��Ͻ��� const�� �����Ѵٴ� ���� Ŭ���� �� ������ const�� �����ϴ� �Ͱ� ���� ȿ��
	const Something something;
	//something.setValue(3);	//error!

	cout << something.getValue() << endl;

	Something something2;
	print(something2);



	return 0;
}
