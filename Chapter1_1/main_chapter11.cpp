#include <iostream>
/*
preprocessor directive
#: ��ó����
iostream: input output stream
*/

int main(void)
{
	(1 + 2) * (3 + 4);	// expression

	int x = 2;	// x:����, �������� �����͸� ���� �� �ִ� �޸� ����
	x = 5;		// 5:���ͷ�(literal)
	int y = x + 3;

	std::cout << y << std::endl;
	std::cout << 1 + 2 << std::endl;
	//std: cout�̶�� �Լ��� ���ǵ� �̸�����(namespace), standard library
	//namespace: ����� ����� �ϴ� �Լ��� ���� ���ų� ���� ���� ���ؼ� �����
	//<<: ������ output operator

	return 0;	// return statement
}