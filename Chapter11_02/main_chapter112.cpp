#include "Student.h"
#include "Teacher.h"

int main()
{
	// #include <string>�� ������, Person.h�� �Ǿ� �ֱ� ������ ���������� ��� ����
	std::string name;

	Student std("Jack Jack");
	std.setName("Jack Jack 2");
	std.getName();
	std::cout << std.getName() << std::endl;

	Teacher teacher1("Dr. H");
	teacher1.setName("Dr. K");

	std::cout << teacher1.getName() << std::endl;
	std::cout << std << std::endl;
	std::cout << teacher1 << std::endl;

	std.doNothing();
	teacher1.doNothing();

	std.study();
	//std.teach();
	teacher1.teach();
	//teacher1.study();

	Person person;
	person.setName("Mr. Incredible");
	person.getName();

	//person.study();
	//person.teach();

	return 0;
}