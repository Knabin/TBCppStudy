#pragma once
//#include <iostream>
#include <string>
#include "Position2D.h"

class Monster
{
private:
	std::string m_name;	// string: char * data, unsigned length;
	//int m_x;	// location
	//int m_y;
	Position2D m_location;	// sub class => 빨리 만드는 게 좋다
	// 상위 클래스는 호출만 하고, 어떻게 작동하는지는 신경 쓰지 않는 편이 좋음 => 쪼개자!

public:
	//Monster(const std::string name_in, const int & x_in, const int & y_in)
	Monster(const std::string name_in, const Position2D & pos_in)
		: m_name(name_in), m_location(pos_in)
	{}

	//void moveTo(const int & x_target, const int & y_target)
	void moveTo(const Position2D & pos_target)
	{
		//m_x = x_target;
		//m_y = y_target;
		m_location.set(pos_target);
	}

	friend std::ostream & operator << (std::ostream & out, const Monster & monster)
	{
		//out << monster.m_name << " " << monster.m_x << " " << monster.m_y << std::endl;
		out << monster.m_name << " " << monster.m_location;
		return out;
	}
};