#include "MyArray.h"

int main()
{
	// std::vector<double> my_array; my_array.resize(100);
	// MyArray<double> my_array(100); => ���� ������ ���� �Ҵ��̾��� ������ cin �����ε� ó�� ��������
	
	int i = 100;
	//MyArray<double, i> my_array;	// error! int i�� const ���̸� OK
	MyArray<double, 100> my_array;	// std::array<double,100>

	for (int i = 0; i < my_array.getLength(); ++i)
		my_array[i] = i + 65;

	my_array.print();
}