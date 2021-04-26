#pragma once
#include <string>
#include <iostream>

class Person
{
private:
	// ��� ���Ͽ����� using namespace std ���� �ʴ� ���� ����

	// ���� Student/Teacher���� m_name�� �����Ϸ��� error
	// 1. m_name�� �����ϴ� Ŭ������ "Person"��
	// 2. Student�� �����Ǵ� ���������� m_name�� �����Ǿ� ���� ����

	// private�� �ڽ��� getter/setter���� error! => public���� �ٲٸ�?
	// ��𿡼� m_name�� ���� �����ϰ� �����ϴ��� �˱� �������

	std::string m_name;

public:
	//Person()
	//	: m_name("No Name")
	//{}

	// m_name�� �ʱ�ȭ�ϴ� ������ ����
	Person(const std::string & name_in = "No Name")
		: m_name(name_in)
	{}

	void setName(const std::string & name_in)
	{
		m_name = name_in;
	}

	// const ������ error!
	std::string getName() const
	{
		return m_name;
	}

	void doNothing() const
	{
		std::cout << m_name << " is doing nothing " << std::endl;
	}
};