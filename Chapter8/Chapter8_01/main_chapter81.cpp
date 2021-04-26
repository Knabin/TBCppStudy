#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Object (����)
// Friend: name, address, age, height, weight, ...
//		   print()

// Class (����)
// C++������ struct ��뵵 OK! 
// ��, �Ϲ������δ� ������ ���� �� struct ���, ��ɵ� ���� ��� class ��� 
class Friend
{
public:	// access specifier (public, private, protected)
	string	m_name;
	string	address_;
	int		_age;
	double	height;
	double	weight;

	// ���� ����̱� ������ ���� ������ ���� ����!
	void print()
	{
		cout << m_name << " " << address_ << " " << _age << " " << height << " " << weight << endl;
	}
};



void print(const string &name, const string &address, const int &age,
	const double &height, const double &weight)
{
	cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
}



int main()
{
	Friend jj{ "Jack jack", "Uptown", 2, 30, 10 };	// instanciation, instance
	
	//print(jj.name, jj.address, jj.age, jj.height, jj.weight);
	//print(jj);
	jj.print();

	vector<Friend> my_friends;
	my_friends.resize(2);

	for (auto &e : my_friends)
		e.print();

	//vector<string> name_vec;
	//vector<string> addr_vec;
	//vector<int> age_vec;
	//vector<double> height_vec;
	//vector<double> weight_vec;

	//print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);

	return 0;
}
