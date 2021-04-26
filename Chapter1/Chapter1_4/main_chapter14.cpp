#include <iostream>	// cout, cin, endl...
#include <cstdio>	// printf

int main()
{
	int x = 1024;
	double pi = 3.141592;

	// cout, endl 등의 함수는 std라는 이름공간 안에 정의되어 있다.
	// 그 안에 있는 것을 사용하기 위하여 콜론 두 개(::)를 넣어 준다.
	// << : output operator, 출력하고 싶은 내용이 스트림을 타고 cout으로 들어간다.
	std::cout << "I love this lecture!" << std::endl;
	std::cout << "x is " << x << " pi is " << pi << std::endl;

	// \t : tab, 어떠한 기능을 수행하는 문자
	// \n : new line
	std::cout << "abc" << "\t" << "def\n\n" << std::endl;
	std::cout << "ab" << "\t" << "cdef\n" << std::endl;

	// namespace 사용을 선언하면, 해당 namespace 이름을 생략해도 컴파일러가 처리한다.
	using namespace std;
	cout << "without std" << endl;

	// \a : audio 소리 출력
	cout << "\a";


	int y = 1;
	cout << "Before your input, y was " << y << endl;
	// >> : input operator, 입력받은 내용이 스트림을 타고 해당 변수로 들어간다.
	cin >> y;

	cout << "Your input is " << y << endl;

	return 0;
}