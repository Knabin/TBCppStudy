//strcat와 동일하게 작동하는 함수 구현
//strcmp와 동일하게 작동하는 함수 구현

#include <iostream>

using namespace std;

void myStrcat(char *ori, int length, const char *cop)
{
	int idx = 0;
	while (true)
	{
		ori[length + idx] = cop[idx];
		if (cop[idx++] == '\0')
			break;
	}
}

int myStrcmp(char *c1, char *c2)
{
	int idx = 0;
	while (c1[idx] != '\0' || c2[idx] != '\0')
	{
		if (c1[idx] > c2[idx])
		{
			return 1;
		}
		else if (c1[idx] < c2[idx])
		{
			return -1;
		}
		idx++;
	}
	return 0;
}

int myStrlen(char *ori)
{
	int idx = 0;
	while (true)
	{
		if (ori[idx] == '\0')
			return idx;
		idx++;
	}
}

int main()
{
	const int MAX = 100;
	char a[MAX] = "Hello ";
	char b[MAX] = "World!";
	int length = myStrlen(a);

	cout << length << endl;

	myStrcat(a, length, b);

	length = myStrlen(a);

	for (int i = 0; i < length; i++)
	{
		cout << a[i];
	}
	cout << endl;

	char c[MAX] = "aaaazz";
	char d[MAX] = "aaaazz";

	cout << (myStrcmp(c, d) == 0 ? "두 문자열은 같습니다." : "두 문자열은 다릅니다.") << endl;

	return 0;
}