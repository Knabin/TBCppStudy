#include <iostream>
#include <memory>

using namespace std;

class A
{
public:
	//'A::~A': function assumed not to throw an exception but does
	//destructor or deallocator has a (possibly implicit) non-throwing exception specification
	// 소멸자에서는 예외를 못 던짐!! 런타임 에러
	~A()
	{
		throw "error";
	}
};

int main()
{
	// 예외처리는 추가적인 연산이 필요하기 때문에 느림 => 반복문 안에 넣으면 속도가 아주 느려질 것임
	// 모든 오류를 전부 예외처리로 잡으려고 하지 말기, 정상적으로 작동하는 건 if문 등으로 정상적으로 작동하게끔!
	// 네트워크, 분산 처리, 병렬 처리, 하드웨어 관련... 예측할 수 없는 경우에만 사용하기
	try
	{
		A a;
	}
	catch (...)
	{
		cout << "Catch" << endl;
	}

	return 0;
}
