#include <iostream>

using namespace std;

int getInt()
{
	while(true){
		cout << "Enter an integer number : ";
		int x;
		cin >> x;
		if (std::cin.fail())	// 실패했을 경우 return true
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');	// 버퍼 비우기, 32767=적당히 큰 숫자
			cout << "Invalid number, please try again" << endl;
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return x;
		}
	}
}

char getOperator()
{
	while (true) 
	{
		cout << "Enter an operator (+, -) : ";	// TODO: more operators *, / etc.
		char op;
		cin >> op;
		std::cin.ignore(32767, '\n');

		if (op == '+' || op == '-')
			return op;
		else
			cout << "Invalid operator, please try again" << endl;
	}
}

void printResult(int x, char op, int y)
{
	// TODO: change this to switch-case
	if (op == '+') cout << x + y << endl;
	else if (op == '-') cout << x - y << endl;
	else
	{
		cout << "Invalid operator" << endl;
	}
}

int main()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);

	return 0;
}