#include <iostream>
#include <fstream>

using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x = 0.0, double y = 0.0, double z =0.0)
		:m_x(x), m_y(y), m_z(z)
	{}

	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }

	//void print()
	//{
	//	cout << m_x << " " << m_y << " " << m_z;
	//}

	// 멤버 함수로는 불가능! 첫 번째 매개변수가 output stream
	// 파일 출력이 가능!!
	friend std::ostream& operator << (std::ostream &out, const Point &point)
	{
		out << "(" << point.m_x << " " << point.m_y << " " << point.m_z << ")";
		return out;	// 반환 타입이 ostream이기 때문에 체이닝(연쇄) 가능
	}

	friend std::istream& operator >> (std::istream &in, Point &point)
	{
		// 방어적 프로그래밍을 위한 조건 등... 필요
		in >> point.m_x >> point.m_y >> point.m_z;
		return in;
	}
};

int main()
{
	ofstream of("out.txt");

	Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.0);
	Point p3, p4;
	
	//p1.print();
	//cout << " ";
	//p2.print();
	//cout << endl;

	cout << p1 << " " << p2 << endl;
	of << p1 << " " << p2 << endl;

	cin >> p3 >> p4;
	cout << p3 << " " << p4 << endl;

	of.close();

	return 0;
}