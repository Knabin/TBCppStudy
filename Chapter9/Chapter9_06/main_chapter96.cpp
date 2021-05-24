#include <iostream>
#include <cassert>
using namespace std;

class IntList
{
private:
	// 동적 할당 시, 반드시 해당 메모리가 allocate되어 있는지 주의!
	// vector를 사용할 경우, vector 자체에 오버로딩이 잘되어 있기 때문에 그걸 사용할 수도 있음 => 템플릿
	int m_list[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

public:

	// parameter에 다른 데이터 타입도 들어올 수 있음, 용도에 따라 다름
	// 값을 읽을 수도 있고, 접근할 수도 있게끔 return값은 reference, 항상 l-value여야 함
	int & operator [] (const int index)
	{
		// assert로 미리 막아 줘야 runtime error debugging 시 편함
		// subscript operator는 자주 사용하기 위해 만드는 것이기 때문에
		// if문을 사용할 경우 속도가 느려짐, 퍼포먼스를 위해 if문은 권장X
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}

	// const IntList의 경우, const로 선언한 함수 호출
	// 값을 변경하지 않는 함수임을 명시(const)해 주어야 함
	const int & operator [] (const int index) const
	{
		return m_list[index];
	}

	void setItem(int index, int value)
	{
		m_list[index] = value;
	}

	int getItem(int index)
	{
		return m_list[index];
	}

	int * getList()
	{
		return m_list;
	}
};

int main()
{
	IntList my_list;
	//my_list.setItem(3, 1);
	//cout << my_list.getItem(3) << endl;
	//my_list.getList()[3] = 10;
	//cout << my_list.getList()[3] << endl;

	my_list[3] = 10;
	cout << my_list[3] << endl;

	const IntList my_clist;
	//my_clist[3] = 10;   // const라서 수정은 불가능함
	cout << my_clist[3] << endl;

	IntList *list = new IntList;

	//list[3] = 10;      // Not OK! 포인터 자체에 사용해 버림
	(*list)[3] = 10;   // OK! de-referencing

	return 0;
}