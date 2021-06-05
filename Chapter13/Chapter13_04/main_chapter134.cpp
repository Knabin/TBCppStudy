#include <iostream>

using namespace std;

template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

// 특정 타입의 경우 다르게 작동하게끔 구현
template<>
char getMax(char x, char y)
{
	cout << "Warning: comparing chars" << endl;
	return (x > y) ? x : y;
}

int main()
{
	cout << getMax(1, 2) << endl;	// == getMax<int>(1, 2)
	cout << getMax<double>(1, 2) << endl;
	cout << getMax('a', 'b') << endl;

	return 0;
}