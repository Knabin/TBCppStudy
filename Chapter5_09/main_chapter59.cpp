#include <iostream>
#include <cstdlib>	// std::radn(), std::srand()
#include <ctime>	// std::time()
#include <random>

unsigned int PRNG()	// Pseudo Random Number Generator
{
	static unsigned int seed = 5523;	// seed number: �����ϴ� ����

	seed = 8253729 * seed + 2396403;	// overflow�� �̿�
	
	return seed % 32768;
}

int getRandomNumber(int min, int max)
{
	// RAND_MAX: �������� ���� �� �ִ� ���� ū ����
	// �����Ⱑ ������ ������ ����� �����ؼ� ���
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
	//std::srand(5323);	// seed ����
	// seed number�� �����Ǿ� ������ �ٸ� ���ڸ� ����� �� ����, ����� �ÿ��� ���� ����
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


	cout << "rand() 5~8 ���" << endl;
	for (int count = 1; count <= 20; count++)
	{
		// ��, ������ ũ�� Ư�� ���ڷ� ������ ������ �߻��� �� ����
		cout << rand() % 4 + 5 << "\t";

		if (count % 5 == 0) cout << endl;
	}
	cout << endl;


	// C++ 11���� �߰���!!
	std::random_device rd;
	// create a mesenne twister
	// mt19937: �˰��� ����, mt19937_64�� 64��Ʈ ����
	std::mt19937 mersenne(rd());	
	// 1 ~ 6 �� ���õǴµ�, Ȯ���� ���� ������
	std::uniform_int_distribution<> dice(1, 6);


	cout << "random_device" << endl;

	for (int count = 1; count <= 20; count++)
	{
		cout << dice(mersenne);

		if (count % 5 == 0) cout << endl;
	}

	return 0;
}