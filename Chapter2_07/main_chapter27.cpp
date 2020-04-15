#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	char c1(65);	// c1 = 65; c1{ 65 };
	char c2('A');	// 한 글자를 표현할 때는 따옴표 사용 / 문자열 "Hello"

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	// c-style casting
	cout << (char)65 << endl;	// A
	cout << (int)'A' << endl;	// 65

	// cpp style
	cout << char(65) << endl;	// 65로 초기화되는 char를 만든다.
	cout << int('A') << endl;

	// static_cast<변환할타입>(변수,리터럴)
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	char ch(97);	// a
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;	// 원래 변수 값이 바뀌지는 않음


	// 입력받은 내용을 버퍼에 가지고 있음
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;

	cout << sizeof(char) << endl;
	cout << (int)std::numeric_limits<char>::max() << endl;		// 127
	cout << (int)std::numeric_limits<char>::lowest() << endl;	// -128

	cout << sizeof(unsigned char) << endl;
	cout << (int)std::numeric_limits<unsigned char>::max() << endl;	// 255
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;	// 0

	// '\n' 하나의 글자로 동작함! 줄 바꿈
	// endl: 버퍼에 있는 것을 무조건 출력하고 줄 바꿈
	// std::flush: 버퍼에 있는 것을 모두 출력함
	cout << int('\n') << endl;	// 10
	cout << "This is first line \nsecond line" << endl;
	cout << "This is first line" << endl;
	cout << "second line";

	// '\t' 탭
	// "를 출력하고 싶으면 '\"'
	// '\a' 소리
	cout << "\n\n" << int('\t') << endl;	// 9
	cout << "This is first line \tsecond line \"\a" << endl;
	
	wchar_t c;		// Windows
	char32_t c3;	// 이모티콘 등 유니코드 문자 사용

	return 0;
}
