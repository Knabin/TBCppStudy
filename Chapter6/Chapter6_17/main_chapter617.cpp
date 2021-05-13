#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	// change array values? => 실패
	for (int number : fibonacci)
		number = 10;

	for (auto &number : fibonacci)	// reference
		number *= 10;

	// output
	for (const auto &number : fibonacci)
		cout << number << " ";
	cout << endl;


	// 가장 큰 숫자 찾기
	int max_number = numeric_limits<int>::lowest();

	for (const auto &n : fibonacci)
		max_number = max(max_number, n);

	cout << max_number << endl;
	

	// 동적 할당 array는 for-each 사용 불가능 => vector 사용!
	// 동적 할당 배열을 아주 편하게 사용할 수 있게 std에 들어 있음
	vector<int> fibonacci2 = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	return 0;
}