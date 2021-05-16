#pragma once
#include <iostream>

template<class T>
class AutoPtr
{
//private:
public:
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
	}

	// 사용하지 않길 원하는 경우, 다음과 같이 delete 처리한다.
	//AutoPtr(const AutoPtr& a) = delete;
	//AutoPtr& operator =(const AutoPtr& a) = delete;

	
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
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;

		return *this;
	}
	
	T& operator* () const { return *m_ptr; }
	T* operator->() const { return m_ptr; } 
};