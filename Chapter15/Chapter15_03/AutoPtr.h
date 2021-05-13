#pragma once

template<class T>
class AutoPtr
{
private:
	T* m_ptr;

public:
	AutoPtr(T* ptr = nullptr)
		: m_ptr(ptr)
	{
		std::cout << "AutoPtr default constructor " << std::endl;
	}

	~AutoPtr()
	{
		std::cout << "AutoPtr destructor" << std::endl;

		if (m_ptr != nullptr) delete m_ptr;
	}
	/*
	AutoPtr(const AutoPtr& a)
	{
		std::cout << "AutoPtr copy constructor" << std::endl;

		// deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr;	// Resource의 경우, Resource의 copy assignment operator
	}

	AutoPtr& operator = (const AutoPtr& a)
	{
		std::cout << "AutoPtr copy assignment" << std::endl;

		if (&a == this)		// prevent self-assignment
			return *this;

		if (m_ptr != nullptr) delete m_ptr;

		// deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr;

		return *this;
	}*/
	
	AutoPtr(AutoPtr&& a)	//r-value reference
		: m_ptr(a.m_ptr)
	{
		a.m_ptr = nullptr;

		std::cout << "AutoPtr move constructor" << std::endl;
	}

	AutoPtr& operator=(AutoPtr&& a)
	{
		std::cout << "AutoPtr move assignment" << std::endl;

		if (&a == this)		// prevent self-assignment
			return *this;

		if (!m_ptr) delete m_ptr;

		// shallow copy
		m_ptr = a.m_ptr;		// 메모리에 첫 주소를 복사해서 넘겨 줌! Resource의 = 아님!
		a.m_ptr = nullptr;

		return *this;
	}

};