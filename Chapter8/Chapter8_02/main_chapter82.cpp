#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
//public:		// access specifier
//private:	// 기본 접근 지정자, 접근 시 access function을 만들어 줘야 함
	int m_month;
	int m_day;
	int m_year;

public:
	// access function
	void setDate(const int& month_input, const int& day_input, const int& year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	// setters
	void setMonth(const int& month_input)
	{
		m_month = month_input;
	}

	void setDay(const int& day_input)
	{
		m_day = day_input;
	}

	void setYear(const int& year_input)
	{
		m_year = year_input;
	}

	// getters
	const int& getMonth()
	{
		return m_month;
	}

	const int& getDay()
	{
		return m_day;
	}

	const int& getYear()
	{
		return m_year;
	}

	void copyFrom(const Date& original)
	{
		// 다른 인스턴스지만, 같은 class라면 private라도 접근 가능!
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}
};

int main()
{
	Date today;// { 8, 4, 2025 };
	
	// std->class 후 바로 접근하려고 하면 error!!
	//today.m_month = 8;
	//today.m_day = 4;
	//today.m_year = 2025;
	today.setDate(8, 4, 2025);
	today.setMonth(10);

	//cout << today.m_day << endl;	error!!
	cout << today.getDay() << endl;

	Date copy;
	copy.setDate(today.getMonth(), today.getDay(), today.getYear());
	copy.copyFrom(today);

	return 0;
}