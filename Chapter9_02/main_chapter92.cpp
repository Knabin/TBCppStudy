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

	// ��� �Լ��δ� �Ұ���! ù ��° �Ű������� output stream
	// ���� ����� ����!!
	friend std::ostream& operator << (std::ostream &out, const Point &point)
	{
		out << "(" << point.m_x << " " << point.m_y << " " << point.m_z << ")";
		return out;	// ��ȯ Ÿ���� ostream�̱� ������ ü�̴�(����) ����
	}

	friend std::istream& operator >> (std::istream &in, Point &point)
	{
		// ����� ���α׷����� ���� ���� ��... �ʿ�
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
