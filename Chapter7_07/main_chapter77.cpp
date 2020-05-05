#include <iostream>
#include <string>
using namespace std;

int addInt(int x, int y)
{
	return x + y;
}

int addDouble(double x, double y)
{
	return x + y;
}

// �Լ� �����ε�!
int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

/*
error! return Ÿ�Ը��� �ٸ��ٸ� �����ε� �Ұ���!
int add(double x, double y)
{
	return x + y;
}
*/

// �Ű������� ���� �����޴� ���
void getRandom(int &x) {}
void getRandom(double &x) {}

typedef int my_int;

// ���� Ÿ������ �νĵ�! error C2084: function 'void print(int)' already has a body
void print1(int x) {}
void print1(my_int x) {}

void print2(char *value) {}
void print2(int value) {}
void print2(const char *value) {}	// "a" ���� �ذ�!

void print3(unsigned int value) {}
void print3(float value) {}

int main()
{
	addInt(1, 2);
	addDouble(1.0, 2.0);
	// int���� double���� �Ű� ���� ���� �ʾ� => �Ű������� �ٸ����� �۵��� ���� ���, �����ε� ���

	add(1, 2);
	add(3.0, 4.0);

	// �̸��� ���Ƶ� �Ű������� �ٸ��� �ٸ� �Լ��� ������
	// �־��� ���ڿ� ���� �� �´� �Ű������� �Լ��� ã�Ƽ� ������
	// ���� ���⼭ � add�� ������� '������ Ÿ��'�� �����Ǿ�� ��

	int x;
	getRandom(x);	// �Է�����, �Լ��� ���� �����ϴ��� �򰥸�

	// int x = getRandomInt(x);	// return type int�� ���
	// int x = getRandom(int());


	print2(0);		// print(int)
	print2('a');	// print(int)
	//print2("a");	// error!


	// error C2668: 'print3': ambiguous call to overloaded function
	//print3('a');
	//print3(0);
	//print3(3.141592);

	// �ǵ���� ��Ȯ�ϰ� ������ ��ȣ���� ������ �� ����! => ���ʿ� �����ε��� �� ��Ȯ�ϰ� �����ϱ�
	// �̸����� �����ϴ� �� ������ ����ϴ� �ͺ��� ���� ��쵵 ����, �ּ� �ޱ�
	print3((unsigned int)'a');
	print3(0u);
	print3(3.141592f);
	

	return 0;
}