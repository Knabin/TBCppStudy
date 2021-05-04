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
//	컴파일러 17버전부터 가능하나 적게 들어가는 것이 좋다
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
		// 더 작은 블럭에 같은 이름의 변수(line 15)가 선언될 경우,
		// 큰 단위의 변수(line 9)를 숨긴다. 가급적으로 이름을 다르게 짓자!
		int apple = 1;	// duration: 블럭 안, 상단 apple과는 다름
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

//apple = 3;	error! 중괄호 범위 밖