#include <iostream>
#include <string>
using namespace std;

// interface class�� ������ �� ������ ����, ������ �ؾ� �Ѵٰ� ���̵常 ������
// interface class�� ��� �տ� I ���̴� ���� ������
class IErrorLog
{
public:
	virtual bool reportError(const char * errorMessage) = 0;

	virtual ~IErrorLog() {}
};

class FileErrorLog : public IErrorLog
{
public:
	bool reportError(const char * errorMessage) override
	{
		cout << "Writing error to a file" << endl;
		return true;
	}
};

class ConsoleErrorLog : public IErrorLog
{
public:
	bool reportError(const char * errorMessage) override
	{
		cout << "Writing error to a console" << endl;
		return true;
	}
};

// interface�� �Ű������� ���� �� ����!
void doSomething(IErrorLog & log)
{
	log.reportError("Runtime error!!");
}

int main()
{
	FileErrorLog file_log;
	ConsoleErrorLog console_log;

	doSomething(file_log);
	doSomething(console_log);

	return 0;
}