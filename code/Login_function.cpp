#include "Login_function.h"
#include<string>
#include <iostream>


using namespace std;

// this login is for student
Student* login_stu(Record* students) {

	int m_id;
	string m_password;

Loop:cout << "Please enter your id: " << endl;
	cin >> m_id;

	// check the id exist or not
	for (auto i : students->Students) {
		if (m_id == i->id) {
			m_id = m_id;
			break;
		}
		if (i == students->Students.back()) {
			if (m_id == i->id) {
				m_id = m_id;
			}
			else goto Loop;
		}

	}

	cout << "Hi user: "<< m_id <<" Welcome back!  Please enter your password: " << endl;
	cin >> m_password;

	//check the password
	for (auto i : students->Students) {
		if (i->id == m_id) {
			if (i->getPassword() == m_password) {
				return i;
			}
			if (i == students->Students.back()) {
				if (i->getPassword() == m_password)
					return i;
			}
			else {
				cout << "The password is wrong" << endl;  // use the try and catch in the main function
				goto Loop;
			}
		}
	}
	return NULL;
}

// this login is for teacher
Teacher* login_tea(Record* teachers) {

	int m_id;
	string m_password;

Loop2:cout << "Please enter your id: " << endl;
	cin >> m_id;

	// check the id exist or not
	for (auto i : teachers->Teachers) {
		if (m_id == i->id) {
			m_id = m_id;
			break;
		}
		if (i == teachers->Teachers.back()) {
			if (m_id == i->id) {
				m_id = m_id;
			}
			else goto Loop2;
		}

	}

	cout << "Hi user: " << m_id << " Welcome back!  Please enter your password: " << endl;
	cin >> m_password;

	//check the password
	for (Teacher* i : teachers->Teachers) {
		if (i->id == m_id) {
			if (i->getPassword() == m_password) {
				return i;
			}
			if (i == teachers->Teachers.back()) {
				if (i->getPassword() == m_password)
					return i;
			}
			else {
				cout << "The password is wrong" << endl;  // use the try and catch in the main function
				goto Loop2;
			}
		}
	}
	return NULL;
}