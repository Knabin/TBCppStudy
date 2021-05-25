#include <iostream>
#include <vector>
#include <string>
#include "Lecture.h"

int main()
{
	using namespace std;

	// Composition Relationship
	Lecture lec1("Introduction to Computer Programming");
	//lec1.assignTeacher(Teacher("Prof. Hong"));
	//lec1.registerStudent(Student("Jack Jack", 0));
	//lec1.registerStudent(Student("Dash", 1));
	//lec1.registerStudent(Student("Violet", 2));

	Lecture lec2("Computational Thinking");
	//lec2.assignTeacher(Teacher("Prof. Good"));
	//lec2.registerStudent(Student("Jack Jack", 0));

	
	// Aggregation Relationship

	// Composition 코드의 문제점:
	// Student(Jack Jack,0)끼리 서로 다른 객체(다른 주소를 가짐)
	Student std1("Jack Jack", 0);
	Student std2("Dash", 1);
	Student std3("Violet", 2);

	Teacher teacher1("Prof. Hong");
	Teacher teacher2("Prof. Good");

	lec1.assignTeacher(&teacher1);
	lec1.registerStudent(&std1);
	lec1.registerStudent(&std2);
	lec1.registerStudent(&std3);

	lec2.assignTeacher(&teacher2);
	lec2.registerStudent(&std1);

	// 1. 메인 함수에서 변수로 선언(상단 구현)
	// 2. 다른 함수에서 사용할 때는 동적 할당으로 구현, 똑같이 사용 가능
	Student *std11 = new Student("Jack Jack", 0);
	Student *std22 = new Student("Dash", 1);
	Student *std33 = new Student("Violet", 2);

	Teacher *teacher11 = new Teacher("Prof. Hong");
	Teacher *teacher22 = new Teacher("Prof. Good");


	// test
	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		// event
		lec2.study();

		cout << lec1 << endl;
		cout << lec2 << endl;
	}

	//TODO: class HobbyClub

	//TODO: delete memory (if necessary)
	delete std11;
	delete std22;
	delete std33;
	delete teacher11;
	delete teacher22;

	return 0;
}