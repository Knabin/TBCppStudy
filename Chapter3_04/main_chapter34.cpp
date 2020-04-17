#include <iostream>

int main()
{
	using namespace std;

	// sizeof: ���������� ũ�⸦ �˰� ���� �� ����Ѵ�. ����-����Ʈ
	// structure, class �� ����ڰ� ���� �ڷ������� ��� �����ϴ�.
	// sizeof�� '������'
	float f;
	
	sizeof(float);
	sizeof(f);
	sizeof f;	// �������� ��� ��ȣ�� ��� �۵���
	

	// comma operator: �ݺ���(for��)���� �����ϰ� �����
	int x = 3;
	int y = 10;
	//int z = (++x, ++y);
	++x;
	++y;
	int z = y;

	cout << x << " " << y << " " << z << " " << endl;


	// ���� ���� �޸��� ������ �ִ� ��ȣ ex: sum(1, 2);
	int a = 1, b = 10;
	int c;

	// �޸� �������� �켱������ ���� �����ں��� ���� ������ ������ ���� ����ȴ�.
	//c = a, b;
	c = (a, b);

	cout << a << " " << b << " " << c << endl;


	// ���� ������ conditional operator (arithmetic if)
	bool onSale = true;
	int price;

	if (onSale)
		price = 10;
	else
		price = 100;

	cout << price << endl;

	// if���� ����Ϸ��� ���� �Լ��� ���� �̿��ϸ� ��
	// �����̳� ������� ������ ���, if������ �ɰ��� �����ϴ� �� �б� ���� ������� ����
	const int price2 = (onSale == true)? 10 : 100;
	
	cout << price2 << endl;


	// ������ �켱���� ������ ���� �����ڸ� ����� ��� ��ȣ ó���ؾ� ��
	int xx = 5;
	cout << ((xx % 2 == 0) ? "even" : "odd") << endl;


	return 0;
}