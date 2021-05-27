#include <iostream>
using namespace std;

class PoweredDevice
{
public:
	int m_i;

	PoweredDevice(int power)
	{
		cout << "PoweredDevice: " << power << '\n';
	}
};

//class Scanner : public PoweredDevice
class Scanner : virtual public PoweredDevice
{
public:
	Scanner(int scanner, int power)
		: PoweredDevice(power)
	{
		cout << "Scanner: " << scanner << '\n';
	}
};

//class Printer : public PoweredDevice
class Printer : virtual public PoweredDevice
{
public:
	Printer(int printer, int power)
		: PoweredDevice(power)
	{
		cout << "Printer: " << printer << '\n';
	}
};

class Copier : public Scanner, public Printer
{
public:
	Copier(int scanner, int printer, int power)
		: Scanner(scanner, power), Printer(printer, power),
		PoweredDevice(power)	// 별도 호출 필요함
	{
	}
};


int main()
{
	Copier cop(1, 2, 3);

	// PoweredDevice 생성자 두 번 호출 및 주소가 다름!! 서로 다른 두 개의 PoweredDevice 생성
	cout << &cop.Scanner::PoweredDevice::m_i << endl;
	cout << &cop.Printer::PoweredDevice::m_i << endl;

	return 0;
}