#include <iostream>
#include <cassert>
using namespace std;

class IntList
{
private:
	// ���� �Ҵ� ��, �ݵ�� �ش� �޸𸮰� allocate�Ǿ� �ִ��� ����!
	// vector�� ����� ���, vector ��ü�� �����ε��� �ߵǾ� �ֱ� ������ �װ� ����� ���� ���� => ���ø�
	int m_list[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

public:

	// parameter�� �ٸ� ������ Ÿ�Ե� ���� �� ����, �뵵�� ���� �ٸ�
	// ���� ���� ���� �ְ�, ������ ���� �ְԲ� return���� reference, �׻� l-value���� ��
	int & operator [] (const int index)
	{
		// assert�� �̸� ���� ��� runtime error debugging �� ����
		// subscript operator�� ���� ����ϱ� ���� ����� ���̱� ������
		// if���� ����� ��� �ӵ��� ������, �����ս��� ���� if���� ����X
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}

	// const IntList�� ���, const�� ������ �Լ� ȣ��
	// ���� �������� �ʴ� �Լ����� ���(const)�� �־�� ��
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
	//my_clist[3] = 10;   // const�� ������ �Ұ�����
	cout << my_clist[3] << endl;

	IntList *list = new IntList;

	//list[3] = 10;      // Not OK! ������ ��ü�� ����� ����
	(*list)[3] = 10;   // OK! de-referencing

	return 0;
}