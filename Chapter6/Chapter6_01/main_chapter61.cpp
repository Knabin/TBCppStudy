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
	// 집주인에게 허락받지 않고 옆집을 사용해 버린 상황

	cout << student_scores[0] << endl;
	cout << student_scores[1] << endl;
	cout << student_scores[2] << endl;
	cout << student_scores[3] << endl;
	cout << student_scores[4] << endl;
	//cout << student_scores[5] << endl;

	// 평범한 변수처럼 사용 가능함
	cout << (student_scores[0] + student_scores[1]) / 2.0 << endl;


	// 구조체 배열
	Rectangle rect_arr[10];

	cout << sizeof(Rectangle) << endl;
	cout << sizeof(rect_arr) << endl;

	rect_arr[0].length = 1;
	rect_arr[0].width = 2;


	// 배열 초기화
	int my_array[5] = { 1, 2, 3 };	// 넣지 않으면 알아서 초기화
	int my_array2[] = { 1, 2, 3, 4, 5 };
	int my_array3[]{ 1, 2, 3, 4, 5 };	// C++ 11부터 가능


	// enum 사용 가능
	int students_scores[NUM_STUDENTS];
	students_scores[JACKJACK] = 0;
	students_scores[DASH] = 100;


	
	int num_students = 0;
	cin >> num_students;

	//int students_scores2[num_students];	error!!
	// cin으로 입력받는다는 것은 runtime에 값이 정해진다는 뜻임
	// 사이즈가 고정된 배열의 사이즈는 compile-time에 고정되어야 함!!
	// => C style: #define D_NUM_STUDENTS 100000(큰 수)
	// 동적 할당을 이용하면 되기 때문에 권장하지 않음


	// const 변수로 사이즈 설정은 가능
	const int num_students2 = 10;

	int students_scores3[num_students2];

	return 0;
}