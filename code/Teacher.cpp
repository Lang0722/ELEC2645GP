//
// Created by 96540 on 2020/11/25.
//

#include "Teacher.h"
#include <iostream>
#include "Student.h"

using namespace std;


void Teacher::checkApplication(vector<Student*> Students)
{
	cout << "Name\t" << "Date\t" << "Timeslote\t" <<endl;
	for (int i = 0; i < (int)Students.size(); i++) {
		if (Students[i]->status == "Under review") {
			cout << Students[i]->name << "\t" << Students[i]->date << "\t" << Students[i]->timeslot << "\t" <<endl;
		}
	}
}

void Teacher::permitApplication(vector<Student*> Students)
{
	string temp;
	cout << "If you want to permit an application, please enter the name of applicant" << endl;
	cout << "If you want to go back to last menu, please enter back" << endl;
	while (1) {
		cin >> temp;
		if (temp == "back") {
			operationMenu();
			break;
		}
		else {
			for (int i = 0; i < (int)Students.size(); i++) {
				if (Students[i]->name == temp) {
					Students[i]->status = "Verified";
					cout << "Application verified" << endl;
					cout << "If you want to permit an application, please enter the name of applicant" << endl;
					cout << "If you want to go back to last menu, please enter back" << endl;
					break;
				}
				else {
					cout << "There is no student named " << temp <<endl;
					cout << "If you want to permit an application, please enter the name of applicant" << endl;
					cout << "If you want to go back to last menu, please enter back" << endl;
					break;
				}
			}
		}
	}
}

void Teacher::operationMenu()
{
	cout << "Welcome " << this->name << "  using this system!" << endl;
	cout << "\t\t ----------------------------------\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          1.Check Application     |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          2.Permit Application    |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t|          0.Quit                  |\n";
	cout << "\t\t|                                  |\n";
	cout << "\t\t ----------------------------------\n";
	cout << "Press number from 0-2 to continue : " << endl;
}
