#include "MyArray.h"

// cpp 파일로 옮기면 linking error!!
// => 정의는 cpp 파일에 있고, main.cpp는 MyArray.h를 include함
//    따라서 instantiation을 할 때, 어떤 타입으로 해야 하는지를 print()를 컴파일할 때 알 수 없음
// MyArray.cpp를 include하면 해결이 되나, 프로젝트가 커지면 오류 발생 가능성 높음

template<typename T>
inline void MyArray<T>::print()
{
	for (int i = 0; i < m_length; ++i)
		std::cout << m_data[i] << " ";
	std::cout << std::endl;
}

// 해결 방법: explicit instantiation
//template void MyArray<double>::print();
//template void MyArray<char>::print();	// 내가 이 print라는 함수를 char 타입으로 사용할 거니까 빌드할 때 instantiation 하라

// 클래스 자체를 exlicit
template class MyArray<double>;
template class MyArray<char>;