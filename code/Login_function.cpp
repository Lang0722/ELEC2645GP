#include "Login_function.h"
#include "RecordStudent.h"
#include<string>
#include <iostream>
#include "Student.h"

using namespace std;

Student* login(RecordStudent* students) {

	int m_id;
	string m_password;

	Loop:cout << "Please enter your id: " << endl;
	cin >> m_id;

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
			
			  // use the try and catch in the main function
	

	cout << "Please enter your password: " << endl;
	cin >> m_password;

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