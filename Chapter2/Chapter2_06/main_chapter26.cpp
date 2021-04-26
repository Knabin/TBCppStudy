#include <iostream>

bool isEqual(int a, int b)
{
	bool result = (a == b);
	return result;
}

int main()
{
	using namespace std;

	bool b1 = true;		// copy initialization
	bool b2(false);		// direct initialization
	bool b3{ true };	// uniform initiaalization
	b3 = false;

	cout << std::boolalpha;	// true false�� ����ϱ�
	cout << b3 << endl;
	cout << !b1 << endl;	// not ������ true->false, false->true
	cout << std::noboolalpha;	// 1 0���� ����ϱ�

	// && AND operator: �� �� �� true�� ��� true
	cout << (true && true) << endl;		// true
	cout << (true && false) << endl;	// false
	cout << (false && true) << endl;	// false
	cout << (false && false) << endl;	// false

	// || OR operator: �� �� �̻� true�� ��� true
	cout << (true || true) << endl;		// true
	cout << (true || false) << endl;	// true
	cout << (false || true) << endl;	// true
	cout << (false || false) << endl;	// false


	// ���ǹ� if: ���ǿ� ���� �������� �� ������ �����Ѵ�.
	// �� �� �̻��� �����ϰ� ���� ���� �߰�ȣ{}�� �̿��Ѵ�.
	if (false)
	{
		cout << "This is true" << endl;
		cout << "True second line" << endl;
	}
	else
		cout << "This is false" << endl;

	cout << isEqual(1, 1) << endl;	// true
	cout << isEqual(2, 5) << endl;	// false


	// if���� 0�̸� false, �� �ܴ� ���� true ó��!
	if (5)
	{
		cout << "true" << endl;
	}
	else
		cout << "false" << endl;


	// ����! �Ҹ��� ���� �Է��� ��, ���ڰ� �ƴ϶� 0/1�� �Է��ؾ� �Ѵ�!
	// 0�� �ƴϸ� true ó���� �ϴ� ���� �����Ѵ�.
	// �̷��� ���輺�� �ִ�, ������ ���� �� �ִ� �ڵ��� ������.
	cout << std::boolalpha;
	bool b;

	cin >> b;
	cout << "Your input: " << b << endl;

	return 0;
}