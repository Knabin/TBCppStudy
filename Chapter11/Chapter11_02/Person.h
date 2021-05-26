#pragma once
#include <string>
#include <iostream>

class Person
{
private:
	// 헤더 파일에서는 using namespace std 쓰지 않는 편이 좋음

	// 현재 Student/Teacher에서 m_name에 접근하려면 error
	// 1. m_name을 관리하는 클래스는 "Person"임
	// 2. Student가 생성되는 시점에서는 m_name이 생성되어 있지 않음

	// private라서 자식의 getter/setter에서 error! => public으로 바꾸면?
	// 어디에서 m_name에 값에 접근하고 변경하는지 알기 힘들어짐

	std::string m_name;

public:
	//Person()
	//	: m_name("No Name")
	//{}

	// m_name을 초기화하는 생성자 생성
	Person(const std::string & name_in = "No Name")
		: m_name(name_in)
	{}

	void setName(const std::string & name_in)
	{
		m_name = name_in;
	}

	// const 없으면 error!
	std::string getName() const
	{
		return m_name;
	}

	void doNothing() const
	{
		std::cout << m_name << " is doing nothing " << std::endl;
	}
};