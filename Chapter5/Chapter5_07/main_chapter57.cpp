#include <iostream>

int pow(int base, int exponent)
{
	int result = 1;

	//for (int count = 1; count <= exponent; count++) 가능
	for (int count = 0; count < exponent; count++)
		result *= base;

	return result;
}

int main()
{
	using namespace std;

	/*
	1. int count = 0;
	2. count < 10 == true ~> 블럭 실행
	3. ++count
	4. count < 10 == true ~> 블럭 실행
					false ~> for문 종료
	*/
	
	//int count = 0;
	//for(; count < 10; ++count) 가능

	for (int count = 0; count < 10; ++count) // iteration
	{
		
		cout << count << endl;
	}
	
	//while (true)
	//for(;;++count) == for(; true; ++count)


	cout << pow(2, 4) << endl;
	cout << pow(3, 5) << endl;

	for (int count = 9; count >= 0; count -= 2)
	{
		cout << count << endl;
	}


	for (int i = 0, j = 0; (i+j) < 10; i++, j += 2)
	{
		cout << i << " " << j << endl;
	}


	for (int j = 0; j < 9; j++)
	{
		for (int i = 0; i < 9; i++)
		{
			cout << i << " " << j << endl;
		}
	}

	/* while문 예제와 마찬가지로 문제가 있는 코드!!
	for (unsigned int i = 9; i >= 0; i--)
	{
		cout << i << endl;
	}
	*/

	return 0;
}