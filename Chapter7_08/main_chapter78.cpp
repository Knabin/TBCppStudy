#include <iostream>
#include <string>

using namespace std;

// �⺻���� ������ ���, �� �������� �ؾ� ��!! (declaration or definition)
void print(int x = 10, int y = 20, int z = 30);	// in header, ���� ���⿡ ���� ������

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

	print2();	// char Ÿ��
	
	//print3(10);	// error! error C2668: 'print3': ambiguous call to overloaded function

	return 0;
}