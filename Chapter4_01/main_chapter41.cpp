#include <iostream>

namespace work1 {
	namespace work11 {
		namespace work111 {
			int a = 1;
			void doSomething()
			{
				a += 3;
			}
		}
	}

	int a = 1;
	void doSomething()
	{
		a += 3;
	}
}

//namespace work1::work11::work112 {
//	�����Ϸ� 17�������� �����ϳ� ���� ���� ���� ����
//}

namespace work2{
	int a = 1;
	void doSomething()
	{
		a += 5;
	}
}

int main()
{
	using namespace std;

	//apple = 0;	error!!

	int apple = 5;

	cout << apple << endl;
	
	{
		// �� ���� ���� ���� �̸��� ����(line 15)�� ����� ���,
		// ū ������ ����(line 9)�� �����. ���������� �̸��� �ٸ��� ����!
		int apple = 1;	// duration: �� ��, ��� apple���� �ٸ�
		cout << apple << endl;
	}
	
	cout << apple << endl;


	// :: scope resolution operator
	work1::a;
	work1::doSomething();

	work2::a;
	work2::doSomething();

	return 0;
}

//apple = 3;	error! �߰�ȣ ���� ��