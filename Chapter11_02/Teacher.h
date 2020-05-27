#pragma once
//#include <string>
#include "Person.h"

class Teacher : public Person
{
private:
	//std::string m_name;

public:
	Teacher(const std::string & name_in = "No Name")
		: Person(name_in)
	{
		this->getName();	// �θ� Ŭ������ �Լ� ���� ����
	}

	void teach()
	{
		std::cout << getName() << " is teaching " << std::endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Teacher & teacher)
	{
		//out << teacher.m_name;	// error!
		out << teacher.getName();
		return out;
	}
};
