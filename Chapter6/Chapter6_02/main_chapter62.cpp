#include <iostream>

using namespace std;

void doSomething(int students_scores[20])	// == int students_score[], 포인터로 받아서 괄호 안 상관없음
{
	// array를 함수의 parameter로 넣어 줄 수 있음
	cout << (int)&students_scores << endl;		// 포인터 변수의 주소값
	cout << (int)&students_scores[0] << endl;	// 포인터 변수에 저장되어 있는 값(원래 배열)
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "Size in doSomething : " << sizeof(students_scores) << endl;	// 포인터의 size
}

int main()
{
	const int num_students = 20;
	//cin >> num_students;

	int students_scores[num_students] = {1, 2, 3, 4, 5};

	cout << (int)&students_scores << endl;		//1832, 첫 번째 방 주소
	cout << (int)&students_scores[0] << endl;	//1832
	cout << (int)&students_scores[1] << endl;	//1836
	cout << (int)&students_scores[2] << endl;	//1840
	cout << (int)&students_scores[3] << endl;	//1844

	cout << sizeof(students_scores) << endl;	// 80

	cout << endl;

	// ~함수와 메인 함수에서의 배열 주소가 다르게 찍히는 이유~
	// 배열은 이름 자체가 내부적으로 주소로 사용이 됨, &를 붙이지 않아도 주소를 얻을 수 있음
	// 함수의 매개변수로 받은 것(int students_scores[20])은 배열이 아니라 포인터!
	// 배열을 받을 때 사용을 할 것이라고 코딩을 할 수 있는 것뿐, 컴파일러 내부에서는 포인터로 처리함
	// 배열의 모든 원소를 복사해서 가져오는 것이 아닌, 배열의 첫 번째 주소값만 넘어간다는 것임
	cout << (int)&students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << "Size in main : " << sizeof(students_scores) << endl;

	doSomething(students_scores);

	return 0;
}