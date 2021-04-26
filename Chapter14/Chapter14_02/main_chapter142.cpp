#include <iostream>

using namespace std;

//void last() throw(int) exception specifier
//void last() throw(...) exception specifier
//Ÿ���� �� �ֵ� ���ܸ� ���� ���ɼ��� �ִ� �Լ����� �����
//����: parameter�� ������(throw()) ���ܸ� �� ���� ���̶�� �ϴ� ����!!

void last() //throw(int)
{
	cout << "last" << endl;
	cout << "Throws exception" << endl;

	//throw - 1;
	throw 'a';	// ��𼭵� �� ��� �ָ� runtime error!

	// ������ ������� �ʰ� �ٷ� catch�Ϸ� ��
	cout << "End last" << endl;
}

void third()
{
	cout << "Third" << endl;

	last();

	// catch ������ �����Ƿ� �Ž��� �ö�
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
		// catch���� ������ catch�� double�̱� ������ �ٽ� �Ž��� �ö�
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
		// catch (int)�� ����!
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
		// std::cout: ����� ���ۿ� ��� ���� �ٷιٷ� �� �ϴ� ��찡 ����, endl�̳� flush ��� �ʿ�
		// std::cerr: ����, ����ϱ� ������ endl ��� ��
		// std::clog: ���
		// ��ɻ��� ū ���̴� ����, �ܼ� ȭ�鿡 ����ϴ� �� ���� ä���� �ִٰ� ���� ��
		cerr << "main caught int exception" << endl;
	}
	catch (...) // catch-all handlers
	{
		cerr << "main caught ellipses exception" << endl;
	}

	cout << "End main" << endl;

	return 0;
}