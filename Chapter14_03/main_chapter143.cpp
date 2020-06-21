#include <iostream>

using namespace std;

class Exception
{
public:
	void report()
	{
		cerr << "Exception report" << endl;
	}
};

class ArrayException : public Exception
{
public:
	void report()
	{
		cerr << "Array exception" << endl;
	}
};

class MyArray
{
private:
	int m_data[5];

public:
	int & operator [] (const int & index)
	{
		//if (index < 0 || index >= 5) throw - 1;
		//if (index < 0 || index >= 5) throw Exception();
		if (index < 0 || index >= 5) throw ArrayException();

		return m_data[index];
	}
};

void doSomething()
{
	MyArray my_array;

	try
	{
		my_array[100];
	}
	catch (const int & x)
	{
		cerr << "Exception " << x << endl;
	}
	// Exception부터 catch문 작성 시,
	//'ArrayException &': is caught by base class ('Exception &') on line 53
	// 부모 클래스에 걸리기 때문에 ArrayException에는 잡히지 못할 것임! 순서 유의
	catch (ArrayException & e)
	{
		cout << "doSomething()" << endl;
		e.report();
		throw e;	// rethrow
	}
	// ArrayException을 Exception으로 받을 수는 있으나
	// 객체 잘림으로 인해 Exception의 report()가 실행됨!
	catch (Exception & e)
	{
		e.report();
		//throw e;	// ArrayException을 Exception으로 받았을 때, 객체 잘림 현상이 일어남
					// 이 상태에서 e를 throw해 버리면 main 함수에서도 ArrayException이 아니라 Exception으로 받음
		throw;		// 이런 경우 그냥 throw해 주면, 맨 처음 들어온 ArrayException을 던지게 됨
	}

}

int main()
{
	try
	{
		doSomething();
	}
	// 이미 doSomething()에서 해당 예외에 대한 예외 처리를 했을 경우, 
	// main 함수의 catch문에서는 따로 처리하지 않음
	// 다시 throw해 주면 여기서도 처리가 가능함!
	catch (ArrayException & e)
	{
		cout << "main()" << endl;
		e.report();
	}

	return 0;
}
