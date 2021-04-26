#include <iostream>	// 표준적으로 사용되는 것이며, 파일 위치가 다르다.
#include "MyHeaders/add.h" // 하위 폴더로 옮겼을 경우, 폴더 이름을 명시한다.
#include "add2.h"

using namespace std;

int main()
{
	cout << add(1, 2) << endl;

	return 0;
}