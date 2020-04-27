#include <iostream>

using namespace std;

#define D_NUM_STUDENTS 100000

struct Rectangle
{
	int length;
	int width;
};

enum StudentName
{
	JACKJACK,		// = 0
	DASH,			// = 1
	VIOLET,			// = 2
	NUM_STUDENTS,	// = 3
};

int main()
{
	/*
	int student1_score;	// jack jack
	int student2_score;	// dash
	int student3_score;	// violet
	*/
	int one_student_score;	// 1 variable
	int student_scores[5];	// 5 int

	cout << sizeof(one_student_score) << endl;	// 4
	cout << sizeof(student_scores) << endl;		// 20

	one_student_score = 100;

	student_scores[0] = 100;	// 1st element, 0:index
	student_scores[1] = 80;		// 2nd element
	student_scores[2] = 90;		// 3rd element
	student_scores[3] = 50;		// 4th element
	student_scores[4] = 0;		// 5th element
	//student_scores[5] = 30;		// 6th element? runtime error!
	// �����ο��� ������� �ʰ� ������ ����� ���� ��Ȳ

	cout << student_scores[0] << endl;
	cout << student_scores[1] << endl;
	cout << student_scores[2] << endl;
	cout << student_scores[3] << endl;
	cout << student_scores[4] << endl;
	//cout << student_scores[5] << endl;

	// ����� ����ó�� ��� ������
	cout << (student_scores[0] + student_scores[1]) / 2.0 << endl;


	// ����ü �迭
	Rectangle rect_arr[10];

	cout << sizeof(Rectangle) << endl;
	cout << sizeof(rect_arr) << endl;

	rect_arr[0].length = 1;
	rect_arr[0].width = 2;


	// �迭 �ʱ�ȭ
	int my_array[5] = { 1, 2, 3 };	// ���� ������ �˾Ƽ� �ʱ�ȭ
	int my_array2[] = { 1, 2, 3, 4, 5 };
	int my_array3[]{ 1, 2, 3, 4, 5 };	// C++ 11���� ����


	// enum ��� ����
	int students_scores[NUM_STUDENTS];
	students_scores[JACKJACK] = 0;
	students_scores[DASH] = 100;


	
	int num_students = 0;
	cin >> num_students;

	//int students_scores2[num_students];	error!!
	// cin���� �Է¹޴´ٴ� ���� runtime�� ���� �������ٴ� ����
	// ����� ������ �迭�� ������� compile-time�� �����Ǿ�� ��!!
	// => C style: #define D_NUM_STUDENTS 100000(ū ��)
	// ���� �Ҵ��� �̿��ϸ� �Ǳ� ������ �������� ����


	// const ������ ������ ������ ����
	const int num_students2 = 10;

	int students_scores3[num_students2];

	return 0;
}