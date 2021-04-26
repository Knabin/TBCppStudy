#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	char c1(65);	// c1 = 65; c1{ 65 };
	char c2('A');	// �� ���ڸ� ǥ���� ���� ����ǥ ��� / ���ڿ� "Hello"

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	// c-style casting
	cout << (char)65 << endl;	// A
	cout << (int)'A' << endl;	// 65

	// cpp style
	cout << char(65) << endl;	// 65�� �ʱ�ȭ�Ǵ� char�� �����.
	cout << int('A') << endl;

	// static_cast<��ȯ��Ÿ��>(����,���ͷ�)
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	char ch(97);	// a
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;	// ���� ���� ���� �ٲ����� ����


	// �Է¹��� ������ ���ۿ� ������ ����
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

	// '\n' �ϳ��� ���ڷ� ������! �� �ٲ�
	// endl: ���ۿ� �ִ� ���� ������ ����ϰ� �� �ٲ�
	// std::flush: ���ۿ� �ִ� ���� ��� �����
	cout << int('\n') << endl;	// 10
	cout << "This is first line \nsecond line" << endl;
	cout << "This is first line" << endl;
	cout << "second line";

	// '\t' ��
	// "�� ����ϰ� ������ '\"'
	// '\a' �Ҹ�
	cout << "\n\n" << int('\t') << endl;	// 9
	cout << "This is first line \tsecond line \"\a" << endl;
	
	wchar_t c;		// Windows
	char32_t c3;	// �̸�Ƽ�� �� �����ڵ� ���� ���

	return 0;
}
