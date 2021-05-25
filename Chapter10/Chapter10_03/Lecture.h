#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
private:
	std::string m_name;

	// value의 vector이기 때문에 push_back을 하면 복사함
	// &student_input != &students[0]
	//Teacher teacher;
	//std::vector<Student> students;

	// students 자체는 vector라서 Lecture가 사라지면 students도 사라짐
	// 단, Student 포인터를 담고 있기 때문에 가리키고 있던 Student 객체들은 사라지지 않음
	Teacher *teacher;
	std::vector<Student *> students;

public:
	Lecture(const std::string & name_in)
		: m_name(name_in)
	{}

	~Lecture()
	{
		// do NOT delete teacher
		// do NOT delete students
	}

	/*
	void assignTeacher(const Teacher & const teacher_input)
	{
		teacher = teacher_input;
	}
	*/

	void assignTeacher(Teacher * const teacher_input)
	{
		teacher = teacher_input;
	}
	
	/*
	void registerStudent(const Student & const student_input)
	{
		students.push_back(student_input);
	}
	*/

	
	void registerStudent(Student * const student_input)
	{
		students.push_back(student_input);
	}
	

	void study()
	{
		std::cout << m_name << " Study " << std::endl << std::endl;

		//for (auto & element : students)	//Note: 'auto element' doesn't work
		//	element.setIntel(element.getIntel() + 1);

		//for (auto & element : students)	//Note: 'auto element' works
		for (auto element : students)
			element->setIntel(element->getIntel() + 1);
	}

	friend std::ostream & operator << (std::ostream & out, const Lecture & lecture)
	{
		out << "Lecture name : " << lecture.m_name << std::endl;

		/*out << lecture.teacher << std::endl;
		for (auto element : lecture.students)
			out << element << std::endl;*/

		out << *lecture.teacher << std::endl;
		for (auto element : lecture.students)
			out << *element << std::endl;

		return out;
	}
};