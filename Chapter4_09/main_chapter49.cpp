#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	using namespace std;
	typedef double distance_t;

	std::int8_t i(97);	// �����ʺ� ���������� ��Ȳ�� ������ �̸��� ����� �� ����

	// �����Ϸ� ���忡���� ����, ���α׷��� ���Ǹ� ����
	double		my_distance;
	distance_t	home2work;
	distance_t	home2school;
	
	// ������ �ڷ����� ������ �� ����
	vector<pair<string, int> > pairlist1;
	vector<pair<string, int> > pairlist2;

	typedef vector<pair<string, int> > pairlist_t;
	pairlist_t pairlist3;

	using pairlist_t2 = vector<pair<string, int> >;
	pairlist_t2 pairlist4;

	return 0;
}