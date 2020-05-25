#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Doctor;	// ���� ���� forward declaration
// ���� �и� ��, ���� ������ class�� ��� �ִ��� ã�� �� ���� ��찡 �߻��� �� ����!!

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
	// ���� ���� �� error! ���� ���� �ȿ� m_name�� �ִ���, �������� �� �� ����
	// ���� body�� Doctor Ŭ������ �ϴ����� �� ��
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
	// �����͸� ���� �ʰ�, ȯ�� ������ȣ(id)�� �ο��Ͽ� �ش� ȯ�ڸ� ã�� ������ε� ���� ����
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

	// friend class �������� ���� ������ �� �ְ� ��
	friend class Patient;
};

void Patient::meetDoctors()
{
	for (auto & ele : m_doctors)
	{
		// ���� ���� �� error! ���� ���� �ȿ� m_name�� �ִ���, �������� �� �� ����
		cout << m_name << " - Meet doctor : " << ele->m_name << endl;
	}
}

int main()
{
	// ��� ������ Ȯ���� �ְ� ���� �ʴ� ���(��-��, ��-��)

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