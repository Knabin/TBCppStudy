#include <iostream>

using namespace std;

void printElements(const int(&arr)[5])	// 이 경우, [5] 필수
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

int main()
{
	const int length = 5;
	int arr[length] = { 1,2,3,4,5 };

	printElements(arr);

	Other ot;
	//ot.st.v1 = 1;

	int &v1 = ot.st.v1;
	v1 = 1;


	int value = 5;
	// 기능상 동일함
	int *const ptr = &value;
	int &ref = value;

	*ptr = 10;
	ref = 10;


	return 0;
}