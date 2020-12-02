#include "Login_function.h"
#include<string>
#include <iostream>
#include<regex>

using namespace std;

// this login is for student
bool is_integer01(string num) {
	return std::regex_match(num, std::regex("[+-]?[0-9]+"));
}

int get_user_input01() {
	int input;
	std::string input_string;
	bool valid_input = false;
	int menu_items = 1000000;

	do {
		std::cout << "\nSelect item: ";
		std::cin >> input_string;
		valid_input = is_integer01(input_string);
		// if input is not an integer, print an error message
		if (valid_input == false) {
			std::cout << "Enter your integer id!\n";
		}
		else {  // if it is an int, check whether in range
			input = std::stoi(input_string);  // convert to int
			if (input >= 0 && input <= menu_items) {
				valid_input = true;
			}
			else {
				std::cout << "Invalid input!\n";
				valid_input = false;
			}
		}
	} while (valid_input == false);

	return input;
}
Student* login_stu(Record* students) {

	int m_id;
	string m_password;

Loop:cout << "Please enter your id: " << endl;
	m_id = get_user_input01();
	// check the id exist or not
	for (auto i : students->Students) {
		if (m_id == i->id) {
			m_id = m_id;
			cout << "Hi user: " << i->name << " Welcome back!  Please enter your password: " << endl;
			break;
		}
		if (i == students->Students.back()) {
			if (m_id == i->id) {
				m_id = m_id;
			}
			if (i == students->Students.back()) {
				cout << "There is no such user id in your group" << endl;
				cout << "Please retry" << endl;
				goto Loop;
			}
		}

	}
	cin >> m_password;

	//check the password
	for (auto i : students->Students) {
		if (i->id == m_id) {
			if (i->getPassword() == m_password) {
				return i;
			}
			else
			{
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
	m_id = get_user_input01();;

	// check the id exist or not
	for (auto i : teachers->Teachers) {
		if (m_id == i->id) {
			m_id = m_id;
			cout << "Hi user: " << i->name << " Welcome back!  Please enter your password: " << endl;
			break;
		}
		if (i == teachers->Teachers.back()) {
			cout << "There is no such user id in your group" << endl;
			cout << "Please retry" << endl;
			goto Loop2;
		}

	}


	cin >> m_password;

	//check the password
	for (Teacher* i : teachers->Teachers) {
		if (i->id == m_id) {
			if (i->getPassword() == m_password) {
				return i;
			}
			else
			{
				cout << "The password is wrong" << endl;  // use the try and catch in the main function
				goto Loop2;
			}
		}
	}
	return NULL;
}

Admin* login_admin(Record* admins) {

	int m_id;
	string m_password;

Loop3:cout << "Please enter your id: " << endl;
	m_id = get_user_input01();;

	// check the id exist or not
	for (auto i : admins->Admins) {
		if (m_id == i->id) {
			m_id = m_id;
			cout << "Hi user: " << i->name << " Welcome back!  Please enter your password: " << endl;
			break;
		}

		if (i == admins->Admins.back()) {
			cout << "There is no such user id in your group" << endl;
			cout << "Please retry" << endl;
			goto Loop3;
		}

	}


	cin >> m_password;

	//check the password
	for (auto i : admins->Admins) {
		if (i->id == m_id) {
			if (i->getPassword() == m_password) {
				return i;
			}
			else
			{
				cout << "The password is wrong" << endl;  // use the try and catch in the main function
				goto Loop3;
			}
		}
	}
	return NULL;
}
