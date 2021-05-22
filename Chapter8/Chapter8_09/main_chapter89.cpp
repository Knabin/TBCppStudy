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
		// 이 member function은 const다 = 내부에서 값을 바꾸지 않는다
		// const로 사용할 수 있는 건 const로 막아 두는 것이 좋음! debugging 유용
		return m_value; 
	}
	
};

void print(const Something &st)
{
	// 복사되는 게 맞으나, default copy constuctor가 숨어 있음
	// const & 사용하면 복사 진행X -> 효율적임
	cout << &st << endl;
	cout << st.getValue() << endl;
}

int main()
{
	const int i = 0;
	//i = 1;	//error!

	// 인스턴스를 const로 선언한다는 것은 클래스 내 변수를 const로 선언하는 것과 같은 효과
	const Something something;
	//something.setValue(3);	//error!

	cout << something.getValue() << endl;

	Something something2;
	print(something2);



	return 0;
}