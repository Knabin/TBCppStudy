#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	/*while (true)
	{*/
		int x, y;
		cin >> x >> y;
		cout << "Your input values are: " << x << " " << y << endl;

		if (x == y)
			cout << "equal" << endl;
		if (x != y)
			cout << "not equal" << endl;
		if (x > y)
			cout << "x is greater than y" << endl;
		if (x < y)
			cout << "x is less than y" << endl;
		if (x >= y)
			cout << "x is greater than y or equal to y" << endl;
		if (x <= y)
			cout << "x is less than y or equal to y" << endl;
	//}

		// 부동 소수점의 비교 시, 사람의 관점에서는 같다고 생각하지만
		// 계산했을 때 같지 않은 경우가 발생한다!
		double d1(100 - 99.99);	// 0.01
		double d2(10 - 9.99);	// 0.01

		cout << d1 << " " << d2 << endl;
		cout << d1 - d2 << endl;

		if (d1 == d2)
			cout << "equal" << endl;
		else 
		{
			cout << "not equal" << endl;
			if (d1 > d2) cout << "d1 > d2" << endl;
			else	// if(d1 < d2) 
				cout << "d1 < d2" << endl;	
		}

		cout << std::abs(d1 - d2) << endl;	// 아주 미세한 차이가 남

		// 오차의 차이를 미리 정의해 비교한다.
		// epsilon 결정: 그때그때 다르게 결정해야 한다...
		const double epsilon = 1e-10;

		if (std::abs(d1 - d2) < epsilon)
			cout << "Approximately equal" << endl;
		else
			cout << "Not equal" << endl;

	return 0;
}