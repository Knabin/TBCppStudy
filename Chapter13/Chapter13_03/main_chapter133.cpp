#include "MyArray.h"

int main()
{
	// std::vector<double> my_array; my_array.resize(100);
	// MyArray<double> my_array(100); => 이전 예제는 동적 할당이었기 때문에 cin 등으로도 처리 가능했음
	
	int i = 100;
	//MyArray<double, i> my_array;	// error! int i에 const 붙이면 OK
	MyArray<double, 100> my_array;	// std::array<double,100>

	for (int i = 0; i < my_array.getLength(); ++i)
		my_array[i] = i + 65;

	my_array.print();
}