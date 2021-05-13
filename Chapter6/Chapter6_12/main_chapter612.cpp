#include <iostream>

using namespace std;

int main()
{
	int length;
	cin >> length;

	//int array[length];
	int *array = new int[length]();	// 전부 0으로 초기화
	//							{11, 22, 33, 44, 55, 66}; // length를 6 미만으로 할 경우 error!

	array[0] = 1;
	array[1] = 2;

	for (int i = 0; i < length; i++)
	{
		cout << (uintptr_t)&array[i] << endl;
		cout << array[i] << endl;
	}

	delete[] array;


	int fixedArray[] = { 1,2,3,4,5 };	// compile-time
	int *array2 = new int[3]{ 1,2,3 };	// new int[]시 빌드 실패!

	// resizing, 직접적으로는 안 됨! 더 큰 메모리를 받은 다음 복사해서 옮기기
	// OS에 요청을 할 수 있음(될 수도 있고, 안 될 수도 있음)

	delete[] array2;

	return 0;
}