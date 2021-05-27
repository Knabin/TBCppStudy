#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string m_name;

public:
	Animal(std::string name)
		: m_name(name)
	{}

public:
	string getName() { return m_name; }

	// body가 없는 virtual function인데 = 0 되어 있는 함수 => pure virtual function
	virtual void speak() const = 0;
	/*
	virtual void speak() const
	{
		cout << m_name << " ??? " << endl;
	}*/
};

/*
void Animal::speak() const	// the body of the pure virtual function
{
	cout << m_name << " ??? " << endl;
}*/

class Cat : public Animal
{
public:
	Cat(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << " Meow" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << " Woof" << endl;
	}
};

class Cow : public Animal
{
public:
	Cow(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << " Moooo" << endl;
	}
};

int main()
{
	//Animal ani("Hi");	// error! abstract class라서 불가능!

	Cow cow("hello");	// Animal::speak() 재정의 필요!!
	cow.speak();


	return 0;
}