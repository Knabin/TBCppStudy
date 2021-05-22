#include <iostream>
#include <cmath>	// sin(), cos()
#include <vector>

using namespace std;

void addOne(int &y)	// int y라면 아무런 의미 없는 함수
{
	cout << y << " " << &y << endl;
	y += 1;
}

// return값을 여러 개 줘야 할 때, reference 사용
// 입력을 보통 앞에, 출력을 reference로 뒤에
void getSinCos(const double degrees, double &sin_out, double &cos_out)
{
	static const double pi = 3.141592;	// static: 함수 안에서 재사용
	//static const double pi = 3.141592 / 180.0;	// 나누기 연산 한 번만 진행

	const double radians = degrees * pi / 180.0;
	//const double radians = degrees * pi;

	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

// const 없이는 리터럴만 받지 못함
// ex) foo(6); //error!
void foo(const int &x)
{
	cout << x << endl;
}

// int *&ptr == (int*) &ptr
void foo2(int *&ptr)
{
	cout << ptr << " " << &ptr << endl;
}

void printElements(const vector<int>& arr)
//void printElements(int (&arr)[4])
{

}

int main()
{
	int x = 5;

	cout << x << " " << &x << endl;

	addOne(x);	// x라는 변수 자체가 넘어감
	cout << x << " " << &x << endl;
	cout << endl;

	double sin(0.0);
	double cos(0.0);
	getSinCos(30.0, sin, cos);
	
	cout << sin << " " << cos << endl;
	cout << endl;

	foo(6);
	cout << endl;

	int *ptr = &x;

	foo2(ptr);
	cout << ptr << " " << &ptr << endl;


	//int arr[]{ 1,2,3,4 };
	vector<int> arr{ 1,2,3,4 };
	printElements(arr);

	return 0;
}