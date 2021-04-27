#include <iostream>
// ASCII 표에 있는 여러가지 문자들을 cin/cout으로 입출력

int main()
{
	using namespace std;

	char input_c = ' ';
	char star_c = '*';
	char num_c = 47;

	cout << num_c << star_c << "문자를 입력하세요." << star_c << num_c << endl;
	cin >> input_c;
	cout << "입력하신 문자: " << input_c << endl;

	int input_i = 0;
	cout << "\n" << num_c << star_c << "숫자(0-127)를 입력하세요." << star_c << num_c << endl;
	cin >> input_i;
	cout << "입력하신 문자: " << static_cast<char>(input_i) << endl;

	return 0;
}