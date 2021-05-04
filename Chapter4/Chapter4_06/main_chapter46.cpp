#include <iostream>
#include <string>
#include <limits>

int main()
{
	using namespace std;

	// 기본적으로 한 글자를 여러 개 나열하는 방식으로 문자열을 사용함
	// string은 프로그래머의 편리를 위해 구현함, 사용자 정의 자료형(기본형은 아님)
	const char my_strs [] = "Hello, World";
	const string my_hello = "Hello, World";	// (), {}도 가능

	// "" 안에 있는 것은 문자열, char[13] 맨 뒤에 끝을 알리는 문자가 있음
	cout << "Hello, World" << endl;
	cout << my_hello << endl;

	// 정수는 문자열로 암시적 형변환 불가능! 문자열 저장 시 따옴표 필수(연산 불가능)
	string my_ID = "123";

	// cin으로 name을 입력받을 때, 중간에 space가 들어가면 다음 입력(age)을 받지 않고 버퍼에서 불러옴
	// getline: line 단위(enter를 칠 때까지) 입력받음!
	cout << "Your name ? : ";
	string name;
	//cin >> name;
	std::getline(std::cin, name);

	cout << "Your age ? : ";
	string age;
	//cin >> age;
	std::getline(std::cin, age);

	cout << name << " " << age << endl;


	// 정수와 문자열을 같이 입력받기
	cout << "Your age ? : ";
	int age2;
	cin >> age2;
	//std::getline(std::cin, age2);

	// '\n'을 만날 때까지 최대 32767(2byte, signed 최대값)의 글자를 무시해라
	//std::cin.ignore(32767, '\n');
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << "Your name ? : ";
	string name2;
	//cin >> name2;
	std::getline(std::cin, name2);

	cout << name2 << " " << age2 << endl;


	// 문자열 더하기
	// string 사용 시, 문자열을 더할 수 있음(append)
	string a("Hello, ");
	string b("World ");
	string hw = a + b;

	hw += "I'm good";

	cout << hw << ", " << hw.length() << endl;


	return 0;
}