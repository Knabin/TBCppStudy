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

	virtual void speak() const
	{
		cout << m_name << " ??? " << endl;
	}
};

class Cat : public Animal
{
public:
	Cat(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << " Meow " << endl;
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
		cout << m_name << " Woof " << endl;
	}
};

int main()
{
	Animal animal("my animal");
	Cat cat("my cat");
	Dog dog("my dog");

	animal.speak();
	cat.speak();
	dog.speak();

	// 자식 클래스를 부모 클래스의 포인터로 캐스팅하면..
	Animal *ptr_animal1 = &cat;
	Animal *ptr_animal2 = &dog;

	// 각각의 울음소리가 아닌 ???(Animal::speak) 출력
	ptr_animal1->speak();
	ptr_animal2->speak();

	cout << endl;


	Cat cats[] = { Cat("cat1"), Cat("cat2") , Cat("cat3") , Cat("cat4") , Cat("cat5") };
	Dog dogs[] = { Dog("dog1"), Dog("dog2") };

	for (int i = 0; i < 5; i++)
		cats[i].speak();

	for (int i = 0; i < 2; i++)
		dogs[i].speak();
	// .....

	cout << endl;

	Animal *my_animals[] = { &cats[0], &cats[1], &cats[2], &cats[3], &cats[4],
							 &dogs[0], &dogs[1]};

	// 한 개의 for문으로 처리 가능!
	// virtual이 없으면 그냥 Animal의 speak() 실행, virtual 붙이면 각각의 울음소리 출력
	for (int i = 0; i < 7; i++)
		my_animals[i]->speak();

	return 0;
}