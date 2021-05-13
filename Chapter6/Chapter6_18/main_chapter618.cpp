#include <iostream>

using namespace std;

enum Type
{
	INT,
	FLOAT,
	CHAR
};

int main()
{
	// void pointer, generic(포괄적) pointer

	int i = 5;
	float f = 3.0;
	char c = 'a';

	void *ptr = nullptr;

	// 주소 넣는 것은 문제 없음! 단, 그렇기 때문에 어떤 타입인지 알 수가 없어짐
	ptr = &i;
	ptr = &f;
	//ptr = &c;

	int *ptr_i = &i;

	cout << ptr_i << endl;
	cout << ptr_i + 1 << endl;

	cout << &f << " " << ptr << endl;	// '주소' 출력 가능
	//cout << *ptr << endl;	// error! 주소에 값이 있는 건 알겠지만, 어떤 형인지 알 수 없음!
	cout << *static_cast<float*>(ptr) << endl;

	//cout << ptr + 1 << endl;	// error! 대체 몇 바이트를 더해야 하는지 알 수 없음!


	// void pointer를 많이 사용하진 않겠지만... 포인터를 이해하는 데 도움이 됨
	Type type = FLOAT;
	if (type == FLOAT)
		cout << *static_cast<float*>(ptr) << endl;
	else if(type == INT)
		cout << *static_cast<int*>(ptr) << endl;

	return 0;
}