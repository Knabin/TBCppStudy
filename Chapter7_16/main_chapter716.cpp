#include <iostream>
#include <cstdarg>	// for ellipsis

using namespace std;

// count: parameter�� ���� argument���� ����
// ����ϱ� �����ϰ� ����� ����...
double findAverage(int count, ...)
{
	double sum = 0;

	va_list list;
	va_start(list, count);

	for (int arg = 0; arg < count; arg++)
		sum += va_arg(list, int);	// int�� ��ȯ

	va_end(list);

	return sum / count;
}

int main()
{
	cout << findAverage(1, 1, 2, 3, "Hello", 'c') << endl;	// 1�� ��
	cout << findAverage(3, 1, 2, 3) << endl;
	cout << findAverage(5, 1, 2, 3, 4, 5) << endl;
	cout << findAverage(10, 1, 2, 3, 4, 5) << endl;	// error! ���� ���� ��� ��

	return 0;
}