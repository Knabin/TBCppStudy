#include "Monster.h"

using namespace std;

int main()
{
	Monster mon1("Sanson", Position2D(0, 0));
	//mon1.m_location;
	cout << mon1 << endl;

	Monster mon2("Parsival", Position2D(0, 0));
	//mon2.m_location;
	// m_location�� mon1�� �̸�("Sanson")�� ���� �� �ʿ䰡 ����
	// m_location�� m_location�� ��ɸ� �ϸ� ��


	//while (1)	// gama loop
	{
		// event
		//mon1.moveTo(1, 1);
		mon1.moveTo(Position2D(1,1));
		cout << mon1 << endl;
	}

	return 0;
}
