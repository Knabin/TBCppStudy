#include <iostream>
#include <string>
#include <limits>

int main()
{
	using namespace std;

	// �⺻������ �� ���ڸ� ���� �� �����ϴ� ������� ���ڿ��� �����
	// string�� ���α׷����� ���� ���� ������, ����� ���� �ڷ���(�⺻���� �ƴ�)
	const char my_strs [] = "Hello, World";
	const string my_hello = "Hello, World";	// (), {}�� ����

	// "" �ȿ� �ִ� ���� ���ڿ�, char[13] �� �ڿ� ���� �˸��� ���ڰ� ����
	cout << "Hello, World" << endl;
	cout << my_hello << endl;

	// ������ ���ڿ��� �Ͻ��� ����ȯ �Ұ���! ���ڿ� ���� �� ����ǥ �ʼ�(���� �Ұ���)
	string my_ID = "123";

	// cin���� name�� �Է¹��� ��, �߰��� space�� ���� ���� �Է�(age)�� ���� �ʰ� ���ۿ��� �ҷ���
	// getline: line ����(enter�� ĥ ������) �Է¹���!
	cout << "Your name ? : ";
	string name;
	//cin >> name;
	std::getline(std::cin, name);

	cout << "Your age ? : ";
	string age;
	//cin >> age;
	std::getline(std::cin, age);

	cout << name << " " << age << endl;


	// ������ ���ڿ��� ���� �Է¹ޱ�
	cout << "Your age ? : ";
	int age2;
	cin >> age2;
	//std::getline(std::cin, age2);

	// '\n'�� ���� ������ �ִ� 32767(2byte, signed �ִ밪)�� ���ڸ� �����ض�
	//std::cin.ignore(32767, '\n');
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << "Your name ? : ";
	string name2;
	//cin >> name2;
	std::getline(std::cin, name2);

	cout << name2 << " " << age2 << endl;


	// ���ڿ� ���ϱ�
	// string ��� ��, ���ڿ��� ���� �� ����(append)
	string a("Hello, ");
	string b("World ");
	string hw = a + b;

	hw += "I'm good";

	cout << hw << ", " << hw.length() << endl;


	return 0;
}