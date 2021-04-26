#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	// change array values? => ����
	for (int number : fibonacci)
		number = 10;

	for (auto &number : fibonacci)	// reference
		number *= 10;

	// output
	for (const auto &number : fibonacci)
		cout << number << " ";
	cout << endl;


	// ���� ū ���� ã��
	int max_number = numeric_limits<int>::lowest();

	for (const auto &n : fibonacci)
		max_number = max(max_number, n);

	cout << max_number << endl;
	

	// ���� �Ҵ� array�� for-each ��� �Ұ��� => vector ���!
	// ���� �Ҵ� �迭�� ���� ���ϰ� ����� �� �ְ� std�� ��� ����
	vector<int> fibonacci2 = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	return 0;
}