#include <iostream>

using namespace std;

int main()
{
	int x = 2;	// x is a variable, 2 is a literal. / assignment: =

	cout << x + 2 << endl;	// �ǿ�����(operand): x, 2
	
	cout << -x << endl;		// ���� ������
	cout << 1 + 2 << endl;	// ���� ������
	
	int y = (x > 0) ? 1 : 2;// c++�� ������ ���� ������, ���� ������
							// ��ȣ�� ���̸� �ݷ� ����, �����̸� ������ ���� ���� ��
	cout << y << endl;

	return 0;
}