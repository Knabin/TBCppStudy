#include <iostream>

using namespace std;

int getInt()
{
	int x;
	while (true) {
		cout << "Enter an integer number : ";
		cin >> x;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
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
	char op;
	while (true)
	{
		cout << "Enter an operator (+, -, *, /) : ";
		cin >> op;
		std::cin.ignore(32767, '\n');

		if (op == '+' || op == '-' || op == '*' || op == '/')
			return op;
		else
			cout << "Invalid operator, please try again" << endl;
	}
}

void printResult(int x, char op, int y)
{
	double result = 0;
	switch (op)
	{
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = static_cast<double>(x) / y;
		break;
	default:
		cout << "Invalid operator" << endl;
		return;
	}
	cout << result << endl;
}

int main()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);

	return 0;
}