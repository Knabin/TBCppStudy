#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//std::array<int, 5> array;
	std::vector<int> array;

	std::vector<int> array2 = { 1,2,3,4,5 };
	std::vector<int> array3 = { 1,2,3 };
	std::vector<int> array4 { 1,2,3 };

	cout << array2.size() << endl;
	cout << array3.size() << endl;
	cout << array4.size() << endl;

	array2.resize(10);	// resize ����

	for (auto &itr : array2)
		cout << itr;
	cout << endl;

	cout << array2[1] << endl;
	cout << array2.at(1) << endl;
	cout << array2.size() << endl;	// size

	int *my_arr = new int[5];
	delete[] my_arr;	// �� ������ �Ѵٴ� �δ��� ����
	// vector�� ���� ������ �����!! ���� ū ����


	return 0;
}