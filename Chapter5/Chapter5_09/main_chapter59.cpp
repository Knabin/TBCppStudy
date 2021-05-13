#include <iostream>
#include <cstdlib>	// std::radn(), std::srand()
#include <ctime>	// std::time()
#include <random>

unsigned int PRNG()	// Pseudo Random Number Generator
{
	static unsigned int seed = 5523;	// seed number: 시작하는 숫자

	seed = 8253729 * seed + 2396403;	// overflow를 이용
	
	return seed % 32768;
}

int getRandomNumber(int min, int max)
{
	// RAND_MAX: 랜덤으로 나올 수 있는 가장 큰 숫자
	// 나누기가 느리기 때문에 결과를 저장해서 사용
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1)*(std::rand()*fraction));
}

int main()
{
	using namespace std;

	cout << "PRNG()" << endl;
	for (int count = 1; count <= 20; count++)
	{
		cout << PRNG() << "\t";

		if (count % 5 == 0) cout << endl;
	}
	cout << endl;


	cout << "srand()" << endl;
	//std::srand(5323);	// seed 설정
	// seed number가 고정되어 있으면 다른 숫자를 출력할 수 없음, 디버깅 시에는 숫자 고정
	std::srand(static_cast<unsigned int>(std::time(0)));

	for (int count = 1; count <= 20; count++)
	{
		cout << std::rand() << "\t";

		if (count % 5 == 0) cout << endl;
	}
	cout << endl;


	cout << "getRandomNumber(int,int)" << endl;
	for (int count = 1; count <= 20; count++)
	{
		cout << getRandomNumber(5,8) << "\t";

		if (count % 5 == 0) cout << endl;
	}
	cout << endl;


	cout << "rand() 5~8 출력" << endl;
	for (int count = 1; count <= 20; count++)
	{
		// 단, 범위가 크면 특정 숫자로 몰리는 현상이 발생할 수 있음
		cout << rand() % 4 + 5 << "\t";

		if (count % 5 == 0) cout << endl;
	}
	cout << endl;


	// C++ 11부터 추가됨!!
	std::random_device rd;
	// create a mesenne twister
	// mt19937: 알고리즘 관련, mt19937_64는 64비트 난수
	std::mt19937 mersenne(rd());	
	// 1 ~ 6 중 선택되는데, 확률은 전부 동일함
	std::uniform_int_distribution<> dice(1, 6);


	cout << "random_device" << endl;

	for (int count = 1; count <= 20; count++)
	{
		cout << dice(mersenne);

		if (count % 5 == 0) cout << endl;
	}

	return 0;
}