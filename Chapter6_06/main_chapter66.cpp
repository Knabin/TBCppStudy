#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char myString[] = "string";	// ������ �ڸ��� null character�� ����! '\0'

	for (int i = 0; i < 7; i++)
		cout << (int)myString[i] << endl;

	cout << sizeof(myString) / sizeof(myString[0]) << endl;	// array size: 7
	cout << endl;

	// �Է¹ޱ�
	char myString2[255];
	//cin >> myString2;
	cin.getline(myString2, 255);	// ���� �����ؼ� �Է¹ޱ�

	//myString2[0] = 'A';
	//cout << myString2 << endl;

	// char�� �� ���ڿ��� ����� ���, NULL(\0)�� ������ ������ �����
	//myString2[4] = '\0';
	//cout << myString2 << endl;

	int ix = 0;

	// while������ ����ϱ�
	while (true)
	{
		if (myString2[ix] == '\0') break;

		cout << myString2[ix] << " " << (int)&myString2[ix] << endl;
		ix++;
	}
	cout << endl;


	// cstring �ȿ� ���ǵǾ� �ִ� �Լ���
	char source[] = "Copy this!";
	char dest[50];
	strcpy_s(dest, 50, source);

	//cout << source << endl;
	//cout << dest << endl;

	//strcat() ���ڿ� �ڿ� �ٿ� �ֱ�
	strcat_s(dest, source);

	cout << "source: " << source << endl;
	cout << "dest: " << dest << endl;


	//strcmp() �� ���ڿ��� �������� ���ϱ�
	//������ 0 return!! ���ǹ� ���� ����
	cout << strcmp(source, dest) << endl;
	if (strcmp(source, dest) == 0)
	{

	}


	return 0;
}