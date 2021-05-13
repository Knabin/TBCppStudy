#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(const array<int, 5>& my_arr)
{
	// 똑같이 작동 가능하나, array 또한 복사되어 작동함! (& 이용)
	cout << my_arr.size() << endl;	
}

int main()
{
	//int array[5] = { 1, 2, 3, 4, 5 };
	array<int, 5> my_arr = { 1, 2, 3, 4, 5 };	// 선언 시, 숫자가 꼭 들어가야 함
	my_arr = { 0, 1, 2 };	// 가능

	cout << my_arr[0] << endl;
	cout << my_arr.at(0) << endl;	// 똑같이 출력하나, 검색 후 문제 발생시 예외 처리!
	cout << my_arr.size() << endl;
	printLength(my_arr);
	cout << endl;

	array<int, 5> arr2 = { 1,21,3,40,5 };

	for (auto &element : arr2)
		cout << element << " ";
	cout << endl;

	sort(arr2.begin(), arr2.end());

	for (auto &element : arr2)
		cout << element << " ";
	cout << endl;

	sort(arr2.rbegin(), arr2.rend());

	for (auto &element : arr2)
		cout << element << " ";
	cout << endl;


	return 0;
}