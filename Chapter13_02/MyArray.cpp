#include "MyArray.h"

// cpp ���Ϸ� �ű�� linking error!!
// => ���Ǵ� cpp ���Ͽ� �ְ�, main.cpp�� MyArray.h�� include��
//    ���� instantiation�� �� ��, � Ÿ������ �ؾ� �ϴ����� print()�� �������� �� �� �� ����
// MyArray.cpp�� include�ϸ� �ذ��� �ǳ�, ������Ʈ�� Ŀ���� ���� �߻� ���ɼ� ����

template<typename T>
inline void MyArray<T>::print()
{
	for (int i = 0; i < m_length; ++i)
		std::cout << m_data[i] << " ";
	std::cout << std::endl;
}

// �ذ� ���: explicit instantiation
//template void MyArray<double>::print();
//template void MyArray<char>::print();	// ���� �� print��� �Լ��� char Ÿ������ ����� �Ŵϱ� ������ �� instantiation �϶�

// Ŭ���� ��ü�� exlicit
template class MyArray<double>;
template class MyArray<char>;