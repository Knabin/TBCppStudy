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
	// Exception���� catch�� �ۼ� ��,
	//'ArrayException &': is caught by base class ('Exception &') on line 53
	// �θ� Ŭ������ �ɸ��� ������ ArrayException���� ������ ���� ����! ���� ����
	catch (ArrayException & e)
	{
		cout << "doSomething()" << endl;
		e.report();
		throw e;	// rethrow
	}
	// ArrayException�� Exception���� ���� ���� ������
	// ��ü �߸����� ���� Exception�� report()�� �����!
	catch (Exception & e)
	{
		e.report();
		//throw e;	// ArrayException�� Exception���� �޾��� ��, ��ü �߸� ������ �Ͼ
					// �� ���¿��� e�� throw�� ������ main �Լ������� ArrayException�� �ƴ϶� Exception���� ����
		throw;		// �̷� ��� �׳� throw�� �ָ�, �� ó�� ���� ArrayException�� ������ ��
	}

}

int main()
{
	try
	{
		doSomething();
	}
	// �̹� doSomething()���� �ش� ���ܿ� ���� ���� ó���� ���� ���, 
	// main �Լ��� catch�������� ���� ó������ ����
	// �ٽ� throw�� �ָ� ���⼭�� ó���� ������!
	catch (ArrayException & e)
	{
		cout << "main()" << endl;
		e.report();
	}

	return 0;
}
