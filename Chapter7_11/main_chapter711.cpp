#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// int *v_ptr = new int[3]{1, 2, 3}; �� ����� ����
	std::vector<int> v{ 1, 2, 3 };

	v.resize(2);

	// size, capacity? capacity��ŭ�� �뷮�� ������ �ְ� �� �� size�� ����Ѵ�

	for (auto &element : v)
		cout << element << " ";
	cout << endl;

	cout << v.size() << " " << v.capacity() << endl;	// ���: 2 3

	//cout << v[2] << endl;		runtime error!
	//cout << v.at(2) << endl;	runtime error!

	int *ptr = v.data();

	cout << ptr[2] << endl;	// ���: 3

	// ���� ���� �޸� �Ҵ�� resize�� �Ϸ���,
	// �޸� 2���� �޾� ���� 3�� �� 2���� �����ϰ�, ���� 3��¥���� delete�ؾ� ��
	// vector�� ���, ���� ������ ���������� �� �޸𸮴� �״�� ������ �ֵ� ������ ������

	// reserve: �޸��� �뷮�� �̸� Ȯ���� ����
	// �ڿ� ���� ���Ҹ� �߰��� ��, ���� �޸� Ȯ���ϴ� ������ ��ĥ �ʿ䰡 ���� ������ �ӵ��� ����
	v.reserve(1024);	

	for (unsigned int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	cout << v.size() << " " << v.capacity() << endl;
	

	return 0;
}