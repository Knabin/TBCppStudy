#include <iostream>
#include <string>

using namespace std;

/*
매개변수를 다 넣기에는 너무 힘듦
void printPerson(double height, float weight, int age, string name)
{
}
*/

struct Person
{
	// member, 기본값을 넣을 수 있음
	double	height;
	float	weight;
	int		age;
	string	name = "Mr. Incredible";

	// 구조체에 속해 있는 함수
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

// return도 가능
Person getMe()
{
	Person me{ 2.0, 100.0, 20,"Jack Jack" };
	return me;
}



int main()
{
	// 여러 명을 저장하려면 힘듦
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

	// 구조체 안에 있는 것에 접근하려면 "."(member access operator)
	me.weight;
	me.print();

	Person me2(me);
	me2.print();

	// 대입 연산자가 내가 의도한 대로 작동되지 않을 수 있으니 주의!
	Person me3;
	me3 = me;
	me3.print();

	Person me_from_func = getMe();
	me_from_func.print();


	Employee emp1;
	cout << sizeof(Employee) << endl;	// 출력: 16


	return 0;
}