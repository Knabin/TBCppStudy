#include <iostream>
#include <string>
using namespace std;

// interface class는 실제로 뭘 할지는 없고, 무엇을 해야 한다고 가이드만 제공함
// interface class의 경우 앞에 I 붙이는 것이 관습임
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

// interface를 매개변수로 받을 수 있음!
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