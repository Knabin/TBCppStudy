#include <iostream>
#include <cstdarg>	// for ellipsis

using namespace std;

// count: parameter로 들어올 argument들의 개수
// 사용하기 위험하고 디버깅 힘듦...
double findAverage(int count, ...)
{
	double sum = 0;

	va_list list;
	va_start(list, count);

	for (int arg = 0; arg < count; arg++)
		sum += va_arg(list, int);	// int로 변환

	va_end(list);

	return sum / count;
}

int main()
{
	cout << findAverage(1, 1, 2, 3, "Hello", 'c') << endl;	// 1만 들어감
	cout << findAverage(3, 1, 2, 3) << endl;
	cout << findAverage(5, 1, 2, 3, 4, 5) << endl;
	cout << findAverage(10, 1, 2, 3, 4, 5) << endl;	// error! 개수 맞춰 줘야 함

	return 0;
}