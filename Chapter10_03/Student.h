#pragma once
#include <iostream>
#include <string>

class Student
{
private:
	std::string m_name;
	int m_intel;	// intelligence;

	//TODO: add more members like address, phone, favorite food, habits, ...

public:
	Student(const std::string & name_in = "No Name", const int & intel_in = 0)
		: m_name(name_in), m_intel(intel_in)
	{}

	void setName(const std::string & name_in)
	{
		m_name = name_in;
	}

	void setIntel(const int & intel_in)
	{
		m_intel = intel_in;
	}

	int getIntel()
	{
		return m_intel;
	}

	friend std::ostream & operator << (std::ostream & out, const Student & student)
	{
		out << student.m_name << " " << student.m_intel;
		return out;
	}

};