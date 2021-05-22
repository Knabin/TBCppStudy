#include <iostream>
#include <string>

using namespace std;

// 기본값을 설정할 경우, 한 군데서만 해야 함!! (declaration or definition)
void print(int x = 10, int y = 20, int z = 30);	// in header, 보통 여기에 많이 설정함

//void print(int x, int y = 20, int z) error!
void print(int x, int y, int z)
{
	cout << x << " " << y << " " << z << endl;
}

void print2(std::string str) {}
void print2(char ch = ' ') {}

void print3(int x) {}
void print3(int x, int y = 20) {}


int main()
{
	print();
	print(100);
	print(100, 200);
	print(100, 200, 300);

	print2();	// char 타입
	
	//print3(10);	// error! error C2668: 'print3': ambiguous call to overloaded function

	return 0;
}