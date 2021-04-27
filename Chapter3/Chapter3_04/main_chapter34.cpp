#include <iostream>

int main()
{
	using namespace std;

	// sizeof : 데이터형의 크기를 알고 싶을 때 사용한다. 단위-바이트
	// structure, class 등 사용자가 만든 자료형에도 사용 가능하다.
	// sizeof는 '연산자'
	float f;
	
	sizeof(float);
	sizeof(f);
	sizeof f;	// 변수명일 경우 괄호가 없어도 작동함
	

	// comma operator : 반복문(for문)에서 유용하게 사용함
	int x = 3;
	int y = 10;
	//int z = (++x, ++y);
	++x;
	++y;
	int z = y;

	cout << x << " " << y << " " << z << " " << endl;


	// 선언에 사용된 콤마는 구분해 주는 기호 ex: sum(1, 2);
	int a = 1, b = 10;
	int c;

	// 콤마 연산자의 우선순위가 대입 연산자보다 낮기 때문에 대입이 먼저 진행된다.
	//c = a, b;
	c = (a, b);

	cout << a << " " << b << " " << c << endl;


	// 조건 연산자 conditional operator (arithmetic if)
	bool onSale = true;
	int price;

	if (onSale)
		price = 10;
	else
		price = 100;

	cout << price << endl;

	// if문을 사용하려면 따로 함수를 만들어서 이용하면 됨
	// 조건이나 결과값이 복잡한 경우, if문으로 쪼개서 구현하는 게 읽기 쉽고 디버깅이 편함
	const int price2 = (onSale == true)? 10 : 100;
	
	cout << price2 << endl;


	// 연산자 우선순위 때문에 조건 연산자를 출력할 경우 괄호 처리해야 함
	int xx = 5;
	cout << ((xx % 2 == 0) ? "even" : "odd") << endl;


	return 0;
}