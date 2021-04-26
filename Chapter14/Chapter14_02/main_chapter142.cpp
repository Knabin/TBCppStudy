#include <iostream>

using namespace std;

//void last() throw(int) exception specifier
//void last() throw(...) exception specifier
//타입을 뭘 넣든 예외를 던질 가능성이 있는 함수임을 명시함
//주의: parameter가 없으면(throw()) 예외를 안 던질 것이라고 하는 것임!!

void last() //throw(int)
{
	cout << "last" << endl;
	cout << "Throws exception" << endl;

	//throw - 1;
	throw 'a';	// 어디서도 못 잡아 주면 runtime error!

	// 던지면 출력하지 않고 바로 catch하러 감
	cout << "End last" << endl;
}

void third()
{
	cout << "Third" << endl;

	last();

	// catch 구문이 없으므로 거슬러 올라감
	cout << "End third" << endl;
}

void second()
{
	cout << "Second" << endl;

	try
	{
		third();
	}
	catch (double)
	{
		// catch문이 있으나 catch가 double이기 때문에 다시 거슬러 올라감
		cerr << "Second caught double exception" << endl;
	}

	cout << "End second" << endl;
}


void first()
{
	cout << "First" << endl;

	try
	{
		second();
	}
	catch (int)
	{
		// catch (int)가 있음!
		cerr << "First caught int exception" << endl;
	}

	cout << "End first" << endl;
}


int main()
{
	cout << "Start" << endl;

	try
	{
		first();
	}
	catch (int)
	{
		// std::cout: 출력을 버퍼에 담아 놓고 바로바로 안 하는 경우가 있음, endl이나 flush 기능 필요
		// std::cerr: 에러, 긴급하기 때문에 endl 없어도 됨
		// std::clog: 기록
		// 기능상의 큰 차이는 없고, 콘솔 화면에 출력하는 세 가지 채널이 있다고 보면 됨
		cerr << "main caught int exception" << endl;
	}
	catch (...) // catch-all handlers
	{
		cerr << "main caught ellipses exception" << endl;
	}

	cout << "End main" << endl;

	return 0;
}