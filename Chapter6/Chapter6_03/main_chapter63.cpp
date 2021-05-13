#include <iostream>

using namespace std;

int main()
{
	//const int num_students = 5;
	/*
	int score0 = 84;
	int score1 = 92;
	int score2 = 76;
	int score3 = 81;
	int score4 = 56;
	int total_score = score0 + score1 + score2 + score3 + score4;
	double avg_score = static_cast<double>(total_score) / num_students;
	//Note: double(total_score) / num_students != double(total_score / num_students);
	*/

	int scores[] = { 84, 92, 76, 81, 56 };

	// 배열이 함수 parameter로 넘어갔을 때, 함수에서 이렇게 연산하면 포인터의 사이즈를 계산해 버릴 수 있으니 주의!!
	// 배열을 보낼 때는 elements 개수를 같이 넘기기
	const int num_students = sizeof(scores) / sizeof(int);

	int max_score = 0;
	int min_score = numeric_limits<int>::max();
	int total_score = 0;
	

	for (int i = 0; i < num_students; i++)
	{
		total_score += scores[i];
		if (scores[i] > max_score)
			max_score = scores[i];
		//max_score = (max_score < scores[i]) ? scores[i] : max_score;
		if (scores[i] < min_score)
			min_score = scores[i];
		//min_score = (min_score > scores[i]) ? scores[i] : min_score;
	}

	double avg_score = static_cast<double>(total_score) / num_students;

	cout << max_score << endl;
	cout << min_score << endl;

	return 0;
}