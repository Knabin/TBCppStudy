#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char myString[] = "string";	// 마지막 자리에 null character가 있음! '\0'

	for (int i = 0; i < 7; i++)
		cout << (int)myString[i] << endl;

	cout << sizeof(myString) / sizeof(myString[0]) << endl;	// array size: 7
	cout << endl;

	// 입력받기
	char myString2[255];
	//cin >> myString2;
	cin.getline(myString2, 255);	// 공백 포함해서 입력받기

	//myString2[0] = 'A';
	//cout << myString2 << endl;

	// char로 된 문자열을 출력할 경우, NULL(\0)이 나오기 전까지 출력함
	//myString2[4] = '\0';
	//cout << myString2 << endl;

	int ix = 0;

	// while문으로 출력하기
	while (true)
	{
		if (myString2[ix] == '\0') break;

		cout << myString2[ix] << " " << (int)&myString2[ix] << endl;
		ix++;
	}
	cout << endl;


	// cstring 안에 정의되어 있는 함수들
	char source[] = "Copy this!";
	char dest[50];
	strcpy_s(dest, 50, source);

	//cout << source << endl;
	//cout << dest << endl;

	//strcat() 문자열 뒤에 붙여 주기
	strcat_s(dest, source);

	cout << "source: " << source << endl;
	cout << "dest: " << dest << endl;


	//strcmp() 두 문자열이 동일한지 비교하기
	//같으면 0 return!! 조건문 사용시 조심
	cout << strcmp(source, dest) << endl;
	if (strcmp(source, dest) == 0)
	{

	}


	return 0;
}