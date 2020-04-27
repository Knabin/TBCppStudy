#include <iostream>

using namespace std;

void doSomething(int students_scores[20])	// == int students_score[], �����ͷ� �޾Ƽ� ��ȣ �� �������
{
	// array�� �Լ��� parameter�� �־� �� �� ����
	cout << (int)&students_scores << endl;		// ������ ������ �ּҰ�
	cout << (int)&students_scores[0] << endl;	// ������ ������ ����Ǿ� �ִ� ��(���� �迭)
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "Size in doSomething : " << sizeof(students_scores) << endl;	// �������� size
}

int main()
{
	const int num_students = 20;
	//cin >> num_students;

	int students_scores[num_students] = {1, 2, 3, 4, 5};

	cout << (int)&students_scores << endl;		//1832, ù ��° �� �ּ�
	cout << (int)&students_scores[0] << endl;	//1832
	cout << (int)&students_scores[1] << endl;	//1836
	cout << (int)&students_scores[2] << endl;	//1840
	cout << (int)&students_scores[3] << endl;	//1844

	cout << sizeof(students_scores) << endl;	// 80

	cout << endl;

	// ~�Լ��� ���� �Լ������� �迭 �ּҰ� �ٸ��� ������ ����~
	// �迭�� �̸� ��ü�� ���������� �ּҷ� ����� ��, &�� ������ �ʾƵ� �ּҸ� ���� �� ����
	// �Լ��� �Ű������� ���� ��(int students_scores[20])�� �迭�� �ƴ϶� ������!
	// �迭�� ���� �� ����� �� ���̶�� �ڵ��� �� �� �ִ� �ͻ�, �����Ϸ� ���ο����� �����ͷ� ó����
	// �迭�� ��� ���Ҹ� �����ؼ� �������� ���� �ƴ�, �迭�� ù ��° �ּҰ��� �Ѿ�ٴ� ����
	cout << (int)&students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "Size in main : " << sizeof(students_scores) << endl;

	doSomething(students_scores);

	return 0;
}