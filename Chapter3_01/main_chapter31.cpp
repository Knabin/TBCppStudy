#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	// ������ ������ ��� ���� ���� ������� �����Ѵ�.
	// �ʿ��� ��� ��ȣ�� ����ؼ� �켱������ ��Ȯ�ϰ� ������.
	int x = 4 + 2 * 3;	// * ����
	int y = 3 * 4 / 2;	// *�� /�� �켱������ ����, Associativity

	int z = std::pow(2, 3);	// 2�� ������
	cout << z << endl;

	return 0;
}