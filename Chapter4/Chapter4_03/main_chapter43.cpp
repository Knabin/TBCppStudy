#include <iostream>

namespace a
{
	int my_var(10);
	int my_a(123);
}

namespace b
{
	int my_var(20);
	int my_b(456);
}

int main()
{
	//std::cout std::endl을 줄여 쓰기 위함
	// using namespace는 사용 취소 방법이 없기 때문에 블록으로 싸 주는 것이 좋음
	using namespace std;
	/*using std::cout; 
	using std::endl;*/

	cout << "Hello " << endl;
	
	using namespace a;
	using namespace b;

	// "my_var" is ambiguous!
	//cout << my_var << endl;
	cout << a::my_var << endl;
	cout << b::my_var << endl;
	cout << my_a << endl;
	cout << my_b << endl;

	// 블럭으로 싸 주는 방법도 있음!
	/*{
		using namespace a;
		cout << my_var << endl;
	}
	{
		using namespace b;
		cout << my_var << endl;
	}*/

	return 0;
}