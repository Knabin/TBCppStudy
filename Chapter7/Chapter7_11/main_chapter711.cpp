#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// int *v_ptr = new int[3]{1, 2, 3}; 와 비슷할 것임
	std::vector<int> v{ 1, 2, 3 };

	v.resize(2);

	// size, capacity? capacity만큼의 용량을 가지고 있고 그 중 size만 사용한다

	for (auto &element : v)
		cout << element << " ";
	cout << endl;

	cout << v.size() << " " << v.capacity() << endl;	// 출력: 2 3

	//cout << v[2] << endl;		runtime error!
	//cout << v.at(2) << endl;	runtime error!

	int *ptr = v.data();

	cout << ptr[2] << endl;	// 출력: 3

	// 직접 동적 메모리 할당시 resize를 하려면,
	// 메모리 2개를 받아 놓고 3개 중 2개를 복사하고, 원래 3개짜리를 delete해야 함
	// vector의 경우, 작은 쪽으로 리사이즈할 때 메모리는 그대로 가지고 있되 접근을 차단함

	// reserve: 메모리의 용량을 미리 확보해 놓음
	// 뒤에 새로 원소를 추가할 때, 따로 메모리 확보하는 과정을 거칠 필요가 없기 때문에 속도가 빠름
	v.reserve(1024);	

	for (unsigned int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	cout << v.size() << " " << v.capacity() << endl;
	

	return 0;
}