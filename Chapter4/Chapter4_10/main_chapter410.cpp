#include <iostream>
#include <string>

using namespace std;

/*
�Ű������� �� �ֱ⿡�� �ʹ� ����
void printPerson(double height, float weight, int age, string name)
{

}
*/

struct Person
{
	// member, �⺻���� ���� �� ����
	double	height;
	float	weight;
	int		age;
	string	name = "Mr. Incredible";

	// ����ü�� ���� �ִ� �Լ�
	void print()
	{
		cout << height << " " << weight << " " << age << " " << name;
		cout << endl;
	}
};

struct Family
{
	Person me, mom, dad;
};

struct Employee		// 2 + (2) + 4 + 8 = 16		padding
{
	short	id;		// 2 bytes
	int		age;	// 4 bytes
	double	wage;	// 8 bytes
};

// return�� ����
Person getMe()
{
	Person me{ 2.0, 100.0, 20,"Jack Jack" };
	return me;
}



int main()
{
	// ���� ���� �����Ϸ��� ����
	double	height1, height2, height3;	// double height1[100];
	float	weight;
	int		age;
	string	name;


	Person me{ 2.0, 100.0, 20, "Jack Jack" };
	/*me.age = 20;
	me.name = "Jack Jack";
	me.height = 2.0;
	me.weight = 100.0;*/
	Person mom;
	Person dad;

	// ����ü �ȿ� �ִ� �Ϳ� �����Ϸ��� "."(member access operator)
	me.weight;
	me.print();

	Person me2(me);
	me2.print();

	// ���� �����ڰ� ���� �ǵ��� ��� �۵����� ���� �� ������ ����!
	Person me3;
	me3 = me;
	me3.print();

	Person me_from_func = getMe();
	me_from_func.print();


	Employee emp1;
	cout << sizeof(Employee) << endl;	// ���: 16


	return 0;
}