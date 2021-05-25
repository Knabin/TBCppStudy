#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Doctor;	// 전방 선언 forward declaration
// 파일 분리 시, 전방 선언한 class가 어디 있는지 찾을 수 없는 경우가 발생할 수 있음!!

class Patient
{
private:
	string m_name;
	vector<Doctor*> m_doctors;	// error! doctor undeclared identifier

public:
	Patient(string name_in)
		: m_name(name_in)
	{}

	void addDoctor(Doctor * new_doctor)
	{
		m_doctors.push_back(new_doctor);
	}

	void meetDoctors();
	/*
	// 전방 선언 시 error! 전방 선언 안에 m_name이 있는지, 없는지를 알 수 없음
	// 따라서 body를 Doctor 클래스의 하단으로 빼 줌
	void meetDoctors()
	{
		for (auto & ele : m_doctors)
		{
			cout <<  m_name << " - Meet doctor : " << ele->m_name << endl;
		}
	}*/

	friend class Doctor;
};

class Doctor
{
private:
	string m_name;
	// 포인터를 쓰지 않고, 환자 고유번호(id)를 부여하여 해당 환자를 찾는 방식으로도 구현 가능
	vector<Patient*> m_patients;
	Doctor * doctor;	// reflexive association

public:
	Doctor(string name_in)
		: m_name(name_in)
	{}

	void addPatient(Patient * new_patient)
	{
		m_patients.push_back(new_patient);
	}

	void meetPatient()
	{
		for (auto & ele : m_patients)
		{
			cout << m_name << " - Meet patient : " << ele->m_name << endl;
		}
	}

	// friend class 선언으로 직접 접근할 수 있게 함
	friend class Patient;
};

void Patient::meetDoctors()
{
	for (auto & ele : m_doctors)
	{
		// 전방 선언 시 error! 전방 선언 안에 m_name이 있는지, 없는지를 알 수 없음
		cout << m_name << " - Meet doctor : " << ele->m_name << endl;
	}
}

int main()
{
	// 어느 한쪽이 확실히 주가 되지 않는 경우(주-주, 부-부)

	Patient *p1 = new Patient("Jack Jack");
	Patient *p2 = new Patient("Dash");
	Patient *p3 = new Patient("Violet");

	Doctor *d1 = new Doctor("Doctor K");
	Doctor *d2 = new Doctor("Doctor L");

	p1->addDoctor(d1);
	d1->addPatient(p1);

	p2->addDoctor(d2);
	d2->addPatient(p2);

	p2->addDoctor(d1);
	d1->addPatient(p2);

	// patients meet doctors
	p1->meetDoctors();

	// doctors meet patients
	d1->meetPatient();

	// deletes
	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;

	return 0;
}