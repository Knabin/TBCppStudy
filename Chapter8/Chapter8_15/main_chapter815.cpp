#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>	// 시간

using namespace std;

class Timer
{
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1>>;

	std::chrono::time_point<clock_t> start_time = clock_t::now();	// 시작 시간, Timer가 만들어지는 순간

public:
	void elapsed()
	{
		std::chrono::time_point<clock_t> end_time = clock_t::now();	// 끝나는 시간

		// 끝나는 시간 - 시작 시간을 초로 변환해서 출력
		cout << std::chrono::duration_cast<second_t>(end_time - start_time).count() << endl;
	}
};

int main()
{
	random_device rnd_device;
	mt19937 mersenne_engine{ rnd_device() };

	vector<int> vec(100000);
	for (unsigned int i = 0; i < vec.size(); i++)
		vec[i] = i;

	// vector를 shuffle
	std::shuffle(begin(vec), end(vec), mersenne_engine);

	//for (auto &e : vec) cout << e << " ";
	//cout << endl;

	Timer timer;
	std::sort(begin(vec), end(vec));

	// 잰 시간을 출력
	timer.elapsed();

	//for (auto &e : vec) cout << e << " ";
	//cout << endl;

	return 0;
}