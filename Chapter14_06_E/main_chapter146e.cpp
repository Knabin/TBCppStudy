#include <iostream>
#include <memory>

using namespace std;

class A
{
public:
	//'A::~A': function assumed not to throw an exception but does
	//destructor or deallocator has a (possibly implicit) non-throwing exception specification
	// �Ҹ��ڿ����� ���ܸ� �� ����!! ��Ÿ�� ����
	~A()
	{
		throw "error";
	}
};

int main()
{
	// ����ó���� �߰����� ������ �ʿ��ϱ� ������ ���� => �ݺ��� �ȿ� ������ �ӵ��� ���� ������ ����
	// ��� ������ ���� ����ó���� �������� ���� ����, ���������� �۵��ϴ� �� if�� ������ ���������� �۵��ϰԲ�!
	// ��Ʈ��ũ, �л� ó��, ���� ó��, �ϵ���� ����... ������ �� ���� ��쿡�� ����ϱ�
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
